module;
#include <iostream>

export module funcs;
using namespace std;

export void func(int value) {
    cout << "func(int): " << value << endl;
}

