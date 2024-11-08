## Overview
Demonstrate accumulate and lambdas.

| | |
| --------- | --------------------------- |
| Exercise Folder | ForEach |
| Builds On | Containers |
| Time to complete | 15 minutes

Modify the *Area* and *Perimeter* functions in *Landscape* to use **accumulate** instead of **for_each**

Can you do it in one statement?

What's the difference with **reduce**?

:::spoiler
```c++
float Perimeter() const
{
    return std::accumulate(shapes.begin(), shapes.end(), 0.0f,
        [](float total, const Measurable *m) {
            return total + m->Perimeter();
    });
}
```
:::