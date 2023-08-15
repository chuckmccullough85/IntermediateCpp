#include <iostream>
using namespace std;


void toupper(string& str)
{
    for (auto& c : str)
        c = toupper(c);
}


int main()
{
    string hello("Hello World");
    string hello2("Hello World");
    if (hello == hello2)
        cout << "they equal ==" << endl;
    auto great = "Great"s;
    hello += great;
    cout << hello << endl;

    auto res = hello <=> great;
    if (res == strong_ordering::less)
        cout << hello << " is < than " << great << endl;
    else if (res > 0)
        cout << hello << " is > than " << great << endl;
    else
        cout << hello << " is equal to " << great << endl;

    toupper(hello);
    cout << hello << endl;        
}