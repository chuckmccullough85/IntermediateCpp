## Overview

This lab adds validation to our project

| | |
| --------- | --------------------------- |
| Exercise Folder | Exceptions |
| Builds On | Interfaces |
| Time to complete | 30 minutes 

### Step 1

Add the following to the test suites:

**ColorTest.cpp**
```C++
TEST_F(ColorTest, InvalidRed) {
   ASSERT_THROW(c1.SetRed(-5), std::invalid_argument);
}
TEST_F(ColorTest, InvalidGreen){
   ASSERT_THROW(c1.SetGreen(-5), std::invalid_argument);
}
TEST_F(ColorTest, InvalidBlue){    
   ASSERT_THROW(c1.SetBlue(270), std::invalid_argument);
}
```
**CircleTest.cpp**
```C++
TEST_F(CircleTest, InvalidRadius){
   ASSERT_THROW(c1.SetRadius(-1), std::invalid_argument);
}
```
**RectangleTest.cpp**
```C++
TEST_F(RectangleTest, SizeError) {  
   ASSERT_THROW(r1.SetDimension(-1, -1), std::invalid_argument);
}
```

Run all tests and verify the new ones **fail**

### Step 2

Modify classes to get the tests to succeed.

---
