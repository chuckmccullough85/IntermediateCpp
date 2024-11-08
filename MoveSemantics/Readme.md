## Overview
Demonstration of string's move semantics.  

| | |
| --------- | --------------------------- |
| Exercise Folder | MoveSemantics |
| Builds On | None |
| Time to complete | 30 minutes

- Add the following code, run and examine the results (note - **add #includes and usings as needed**).  Use any file you wish as the infile

```C++
string getInfo()
{
    ifstream infile("anyfile");
    string txt = string((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>());
    infile.close();
    cout << "txt buffer loc: " << ((void*)txt.c_str()) << endl;
    return txt;
}

void func(string data)
{
    cout << "data buffer loc: " << ((void*)data.c_str()) << endl;
}

int main()
{
    auto result = getInfo();
    cout << "result buffer loc: " << ((void*)result.c_str())  << endl;
    func(result);

    func(getInfo());
}
```

- Move the declaration of ***txt***in *getInfo()* to be a global
- Rerun the application
- Explain the changes

* * *

### Part 2

- Create a class (same .cpp file as above)
- Add a noisy copy constructor, move constructor, assignment operator, and move assignment operator
- Create a function that returns an instance of the class
- Create a function that accepts an instance of the class by value
- Call the functions from main()

