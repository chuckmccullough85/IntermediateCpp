## Overview
In this lab, we convert a synchronous function to a task.

| | |
| --------- | --------------------------- |
| Exercise Folder | Tasks |
| Builds On | None |
| Time to complete | 20-40 minutes

---

### Setup 

Review the code in *main.cpp*.

The function *Convert* reads an input file and creates an output file of all uppercase letters.  It returns the name of the file and the number of characters that were actually changed to uppercase.

*main* loops through the command line arguments, calling *Convert* for each file sequentially.

Change *main* to create tasks for each file and then wait for them to complete in parallel.

### Steps - main
1.  Create a vector (or list) of ```future<ConvertResult>```.
2.  In the loop, call **async** to create the task on *ConvertFileUpper* and add the future to the vector
3.  Remove the output statement showing the result
4.  Create a second loop to loop through the vector of futures
5.  Call **get()** to get the result of the task
6.  Display the result of the conversion

:::spoiler
```c++
int main(int argc, char* argv[]) 
{
    cout << "Tasks Project" << endl;
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " file [file] ..." << endl;
        return 1;
    }
    vector<future<ConvertResult>> futures;
    for_each(argv + 1, argv + argc, [&futures](const char* fileName)
    {
        futures.push_back(async(ConvertFileToUpper, fileName));
    });
    for (auto& f : futures)
    {
        auto result = f.get();
        cout << "File " << result.first << " converted " << result.second << " characters" << endl;
    }

    return 0;
}
```
:::


