## Overview
In this lab, we will code our initial landscaping classes to satisfy the unit tests (Ignore *Color-Statics* test.)

| | |
| --------- | --------------------------- |
| Exercise Folder | Landscaping  |
| Builds On | none |
| Time to complete | 40 minutes

Implement *Color*, *Circle*, and *Rectangle*

### Setup
The starter code for this lab is found in the *Landscaping* folder.  If using VS Code, select *Landscaping* as the target run project and run it.
![16](images/buildbar.jfif)
All of the tests will fail. This is because all of the functions in the skeleton classes throw exceptions.


### Steps
#### Color
1. Start with *Color.h*
2. Define an instance variable to hold rgb - ```unsigned rgb;```
3. Implement the constructors and setters/getters
4. Run the test again - a little better?

##### Color Add
Color add.  Colors can be added,  this means that each color component is added.
	* Don't let color component exceed 255
	* use the header **\<algorithm\>** and the **std::min** function to create a new color object that is the sum of the other 2
	
:::spoiler	

```c++
	#include <algorithm>
	...
	
Color add(const Color &other) const
{
    return Color(
        std::min(255u, Red() + other.Red()),
        std::min(255u, Green() + other.Green()),
        std::min(255u, Blue() + other.Blue()));
}

```
:::

#### Circle

1. A circle has a name, color, & radius.  Create instance variables for those fields
2. Start with the constructor - there are many ways to initialize - assign to the field, call the setter, or use the initializer list.
3. Implement the trivial setters and getters
4. For area and perimeter, you will need PI.  There is a PI constant in the std library - we will use it later.  For now, use:

```c++
constexpr double PI = 3.141592653589;
```

#### Rectangle
No surprises in *Rectangle*. Just implement it!
