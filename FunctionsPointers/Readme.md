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
