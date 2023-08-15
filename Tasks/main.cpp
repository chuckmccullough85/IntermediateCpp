#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <future>
#include <fstream>
#include <chrono>

using namespace std;
using ConvertResult = pair<string, int>;
ConvertResult ConvertFileToUpper (const string& fileName)
{
    cout << "Converting file " << fileName << endl;
    ifstream input(fileName);
    ofstream output(fileName + ".out");
    int count = 0;
    string line;
    while (getline(input, line))
    {
        for (auto& c : line)
        {
            char old = c;
            c = toupper(c);
            if (old != c) ++count;
        }
        output << line << endl;
    }
    return make_pair(fileName, count);
}


int main(int argc, char* argv[]) 
{
    cout << "Tasks Project" << endl;
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " file [file] ..." << endl;
        return 1;
    }

    auto start = chrono::steady_clock::now();
    //TODO - create a vector of future<ConvertResult> objects

    for_each(argv + 1, argv + argc, [](const char* fileName)
    {
        // TODO change to a call to async. Store the future in the vector
        auto result = ConvertFileToUpper(fileName);
        // TODO move this line to a second loop below
        cout << "File " << result.first << " converted " << result.second << " characters" << endl;
    });

    // TODO - loop through the vector of futures and call get() on each one
    // TODO - print the result of each call to get()

    cout << "Elapsed time: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() << "ms" << endl;
    return 0;
}