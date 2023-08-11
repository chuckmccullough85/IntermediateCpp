In this lab, we will examine the string class.

| | |
| --------- | --------------------------- |
| Exercise Folder | Strings  |
| Builds On | none |
| Time to complete | 15 minutes

* * *
## Steps
1. Create a new console application
	- Right click on your solution and choose *add/new project*
	- From the project templates (C++/All projects), choose *Console Application*
	- Modify main to include &lt;string&gt;
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

