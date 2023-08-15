#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("out.txt");
    string hello("Hello World");
    string hello2("Hello World");
    if (hello == hello2) out << "they equal ==" << endl;
    auto great = "Great"s;
    auto txt = "const char *";
    hello += great;
    // or hello.append(great);
    out << hello << endl;
   
    if (hello > great) out << hello << " is bigger than " << great << endl;

    auto res = hello <=> great;
    if (res == strong_ordering::less) out << hello << " is < than " << great << endl;
    else if (res > 0) out << hello << " is > than " << great << endl;
    else out << hello << " is equal to " << great << endl;

    for (auto& c : hello) c = toupper(c);
    out << hello << endl;
    out.close();

    cout << "Enter a filename: " << flush;
    string response;
    cin >> response;
    ifstream infile(response);
    string line;
    int linenum = 1;
    
    while (getline(infile, line))
        cout << linenum++ << "\t" << line << endl;
    infile.close();
}

