#include <iostream>
#include <thread>
#include <filesystem>

using namespace std;


void Monitor(string path)
{
    filesystem::file_time_type lastTime;
    while (true)
    {
        filesystem::file_time_type time = filesystem::last_write_time(path);
        if (time != lastTime)
        {
             cout << "File changed " << path << endl;
            lastTime = time;
            for (auto file : filesystem::directory_iterator(path))
            {
                cout << file.path() << endl;
            }
        }
    }
}

int main(int argc, char* argv[]) 
{
    cout << "Threads Project" << endl;
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " <path>" << endl;
        return 1;
    }
    string path = argv[1];
    Monitor(path);
    return 0;
}