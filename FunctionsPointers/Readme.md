## Overview
Building on previous lab, we will had a *Landscape* class that holds up to 10 circles.


| | |
| --------- | --------------------------- |
| Exercise Folder | FunctionsPointers  |
| Builds On | Landscaping |
| Time to complete | 30 minutes  

### Landscape  

* * *
The starter code for this lab is found in the *FunctionsPointers* project.  Set this as your run project and run it.
The specifications for the Landscape class are found in the failed tests:

```
[  FAILED  ] 4 tests, listed below:
[  FAILED  ] LandscapeTest.Name
[  FAILED  ] LandscapeTest.Area
[  FAILED  ] LandscapeTest.Perimeter
[  FAILED  ] ColorTest.TestStatics
```

Implement Landscape.

Note - just use a fixed size array for circles (like 10).  The instance variable can be declared as
```C++
    const Circle** circles;
```

In the constructor, allocate the array like this:
```c++
circles = new const Circle * [10];
```

You will also need to keep track of how many circles have been added.

Since Landscape is holding **const** pointers, it will only be able to call **const** functions in *Circle*.  Is  *Circle* **const** correct?

---

:::spoiler
*Landscape class* 
```c++
class Landscape
{
public:
    Landscape(const std::string &name)
    {
        this->name = name;
        shapes = new const Circle *[10];
        count = 0;
    }
    std::string Name() const { return name; }
    void SetName(const std::string &name)
    {
        this->name = name;
    }
    void Add(const Circle *circle)
    {
        shapes[count++] = circle;
    }
    float Area() const
    {
        float total = 0;
        for (int i = 0; i < count; i++)
            total += shapes[i]->Area();
        return total;
    }
    float Perimeter() const
    {
        float total = 0;
        for (int i = 0; i < count; i++)
            total += shapes[i]->Perimeter();
        return total;
    }

private:
    std::string name;
    const Circle **shapes;
    int count;
};

```

