#include <iostream>
#include <future>

using namespace std;



int main(int argc, char* argv[]) 
{
    cout << "Tasks Project" << endl;
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " file [file] ..." << endl;
        return 1;
    }

    return 0;
}