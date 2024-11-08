## Overview
In this lab, we will examine the string class.

| | |
| --------- | --------------------------- |
| Exercise Folder | Strings  |
| Builds On | none |
| Time to complete | 15 minutes

* * *
This is a stand-alone console project.

## Steps
1. Start with the code in the *Strings* folder
2. Modify main to include &lt;string&gt;
	- Add **using namespace std;**
	- Experiment with different string operations and declarations

For instance (explain the syntax of each line):
```C++
string hello("Hello World");
string hello2("Hello World");
if (hello == hello2) 
    cout << "they equal ==" << endl;
auto great = "Great"s;
hello += great;
cout << hello << endl;
```
Change the project properties to choose C++ 20 standard

Try this:
```C++
auto res = hello <=> great;
if (res < 0) 
    cout << hello << " is < than " << great << endl;
else if (res > 0) 
    cout << hello << " is > than " << great << endl;
else 
    cout << hello << " is equal to " << great << endl;
```

How would you convert a string to upper case? 

---

:::spoiler
```c++
void toupper(string& str)
{
    for (auto& c : str)
        c = toupper(c);
}
```
:::
