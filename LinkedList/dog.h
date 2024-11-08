#pragma once
#include <string>
#include <iostream>

namespace examples::dog 
{
    using namespace std;    
    class dog 
    {
    public:
        dog() : dog(10) {}
        dog(int weight) : dog("", weight)  {}
        dog(string name, int weight) : name(name)
        {this->weight = weight;}
        dog(const dog& original) 
        : name(original.name), weight(original.weight) {}
        ~dog () {cout << "I'm dying!" << endl;}
        void speak() const
        {
            cout << "[" << name << "] ";
            if (this->weight > 40)
                cout << "WOOF" << endl;
            else cout << "woof" << endl;
        }
    private:
        int weight;
        string name;
    };
}