## Overview
In this lab, we build a stand-alone example of the new template syntax

| | |
| --------- | --------------------------- |
| Exercise Folder | Template20 |
| Builds On | na |
| Time to complete | 30 minutes

---

1. Open the starter project in *Template20*
5. Copy *Color.h* and *Color.cpp* into the project folder and include them in the project
	a. In VS code, you can drag with \<ctrl\> held down to copy files within the explorer panel
	b. *If Color.cpp contains any code, include it in CMakeList.txt*
7. Create a function named *add* that adds 2 numbers and returns the result (**same file as main**) 

```c++
int add(int x, int y)
{
    cout << "int add" << endl;
    return x + y;
}
```

9. Lift the function to a template
10. In *main*, demonstrate that strings and numbers can be added using the template function
11. Try to add colors by passing color objects into the add template - note the error message
12. Add a constraint to the template requiring number types
14. Add another template function to add colors using *add* instead of +

---

:::spoiler
Here's some examples:

```C++

#include <iostream>
#include <string>
#include <concepts>
#include "Color.h"

using namespace std;
using namespace training::utility;

int add(int x, int y)
{
    cout << "int add" << endl;
    return x + y;
}

template <floating_point T>
T add(const T& x, const T& y)
{
    cout << "T add" << endl;
    return x + y;
}

template <typename T>
concept addable = requires (T o1, T o2) {
    {o1.add(o2)} -> same_as<T>;
};

auto add(const addable auto& x, const addable auto& y)
{
    cout << "auto add" << endl;
    return x.add(y);
}

class foo { public: foo add(const foo& p2) const { return *this; } };


int main()
{
    auto result = add(10, 20);
    auto fresult = add(3.14, 5.12);
    Color c1;
    Color c2(Color::RED);
    auto cresult = add(c1, c2);
    add(foo(), foo());
}

```
:::

---
