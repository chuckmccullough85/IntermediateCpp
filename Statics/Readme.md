## Overview
Create some common colors as static members of the *Color* class.

| | |
| --------- | --------------------------- |
| Exercise Folder | Namespaces  |
| Builds On | Namespaces |
| Time to complete | 30 minutes 

### Steps
1. In *Color.h*, add some static members to the color class.  For instance:

```c++
static Color RED;
static Color GREEN;
static Color BLUE;
static Color WHITE;
static Color BLACK;
```

The statics declarations don't provide storage for the colors, just a forward declaration.  The storage must be allocated only once.  The best place for this is the .cpp file

2. In *Color.cpp*, define the colors and initialize. 
:::spoiler

```c++
Color Color::RED(255, 0, 0);
Color Color::GREEN(0, 255, 0);
Color Color::BLUE(0, 0, 255);
Color Color::WHITE(255, 255, 255);
Color Color::BLACK(0, 0, 0);
```
:::

<br/>
3. In Tests/ColorTest.cpp uncomment the code in *TestStatics* and delete ```FAIL()```