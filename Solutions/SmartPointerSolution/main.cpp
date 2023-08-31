// Compile this directory with g++ -fsanitize=address -std=c++20  *.cpp 
// and run the resulting executable. You should see something like this:
// This verifies that the address sanitizer picks up the memory leak in main.
// However, there is no leak from the linked list!
// This is because the linked list uses smart pointers to manage its memory.
#include "LinkedList.h"

using namespace training::templates;
int main()
{
    auto list = LinkedList<int>();
    int a = 1;
    int b = 2;
    int c = 3;
    list.add(&a);
    list.add(&b);
    list.add(&c);
    char* ch = new char[10];
}