## Overview
Modify Landscape to free memory allocated.

| | |
| --------- | --------------------------- |
| Exercise Folder | Namespaces  |
| Builds On | Namespaces |
| Time to complete | 15 minutes

* * *
### Steps

1. Add a destructor ``` ~Landscape()``` to the *Landscape* class.  
2. Delete the memory that was allocated with **new** in the constructor.  

* Remember, if an array was allocated use **delete[]** to free the memory.

