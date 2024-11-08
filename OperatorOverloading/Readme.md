## Overview
In this lab, we demonstrate operator overloading by adding selected operators to some of our classes.

| | |
| --------- | --------------------------- |
| Exercise Folder | OperatorOverloading |
| Builds On | Templates |
| Time to complete | 45 minutes

---
> Note: if you did not complete the last exercise, you can start with the **OperatorOverloading** folder/project.

- Implement the following operators in **Color**:
- '''+''' to add colors together
- int conversion - rgb value
- << ostream operator

### Details
#### Step 1
1. Examine *ColorTest* and *CircleTest*
2. There are several tests marked with **DISABLED_** with commented out code
3. When we run the tests, these will be counted as disabled.
5. Examine the last 3 tests in ColorTest.cpp - these are the requirements
6. In Color.h, add these member functions:  (note, the operations create new objects)
    - ```operator int()```
    - ```Color operator + (const Color&) const```
7. Add a global function after the class definition
    - ```inline ostream& operator << (ostream&, const Color&)```
9. Implement the functions to satisfy the tests
10. Remove the **DISABLED_** prefix from the tests

> Google test ignores tests that are prefixed with **DISABLED_**.  The test is still logged so that we don't forget about it.

:::spoiler
*Color.h*
```c++
// in Color class
operator int() const { return Rgb(); }
Color operator + (const Color& other) const
{
    return add(other);
}
friend std::ostream& operator << (std::ostream& out, const Color& color);
```

*Color.cpp*
```c++
std::ostream& operator << (std::ostream& out, const Color& color)
{
    out << "Color (" << std::hex << color.Red()
        << ", " << color.Green()
        << ", " << color.Blue() << ")" << std::dec;
    return out;
}
```
:::

#### Step 2
 
Implement the following operators in **Circle**

+ (+=, ++) to create a new circle with new area.

Note - the radius from area is ```float radius = std::sqrt(area / PI);```

```<< ostream```

1. Uncomment the tests in CircleTest.cpp
2. implement the required operators as member functions - addition produces new circles.
3. Implement <<; as a friend
4. Remove the **DISABLED_** prefix from the tests

---

:::spoiler
*Circle.h*
```c++
// in Circle class
Circle operator + (const Circle& c2) const   // c1 + c2
{
	float area = Area() + c2.Area();
	float radius = std::sqrt(area / PI);
	return Circle(radius, "Result", 0);
}
Circle& operator += (int value)
{
	SetRadius((float)std::sqrt((Area() + value) / PI));
	return *this;
}
Circle& operator ++()		// func (++c)
{
	return operator +=(1); // (*this) += 1;
}
void operator ++(int) // postfix   func(c++);
{
	++(*this);  // or this->operator++();
}
friend std::ostream& operator << (std::ostream& out, const Circle& c);

// after circle class
inline std::ostream& operator << (std::ostream& out, const Circle& c)
{
	out << "A circle with an area of " << c.Area()
		<< " and a radius of " << c.radius;
	return out;
}
```
:::
 