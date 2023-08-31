
#include <future>
#include <iostream>
using namespace std;

template <typename T, typename Work>
auto get_work_done(future<T> &f, Work &w)-> decltype(w(f.get()))
{return w(f.get());}

template <typename Work>
auto get_work_done(future<void> &f, Work &w)-> decltype(w())
{f.wait(); return w();}

template <typename T, typename Work>
auto then(future<T>& f, Work w) -> future<decltype(w(f.get()))>
{
    return async([](future<T> f, Work w)
                      { return get_work_done(f,w); }, move(f), move(w));
}

int step(const string& name, int iterations)
{
    cout << name << " started" << endl;
    for (int i = 0; i < iterations; ++i)
    {
        this_thread::sleep_for(chrono::milliseconds(rand() %1000));
    }
    return iterations;
}

int main()
{
    auto s1a = async(step, "Step 1a", 5);
    auto s1b = async(step, "Step 1b", 5);

    then(s1a, [](int i) { cout << "1a finished" << endl; return i; });
    then(s1b, [](int i) { cout << "1b finished" << endl; return i; });

}