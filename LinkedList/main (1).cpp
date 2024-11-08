#include <iostream>
#include "dog.h"
#include "dog_list.h"

using namespace std;
using namespace examples::dog;

void func(dog_list copy) {}

int main()
{
    dog d1("Fido", 20);
    dog d2("Rover", 42);
    dog d3("King", 10);
    dog d4("Fluffy", 12);
    dog d5("Clifford", 102);
    dog_list kennel;
    kennel.add_dog(&d1);
    kennel.add_dog(&d2);
    kennel.add_dog(&d3);
    kennel.add_dog(&d4);
    kennel.add_dog(&d5);
    func(kennel);

    auto it = kennel.begin();
    const dog* d;
    while ((d = it.next()) != nullptr)
    {
        d->speak();
    }

}