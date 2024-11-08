## Overview
Let's use smart pointers and understand the impact!

| | |
| --------- | --------------------------- |
| Exercise Folder | SmartPointers |
| Builds On | OperatorOverloading |
| Time to complete | 45 minutes


In this lab, we will examine the impact of using unique\_ptrs and shared\_ptrs in the linked list
> Note:  if you did not complete the last exercise, you can start with the **SmartPointers** folder
---
### Unique
We only want to wrap pointers that need to be **delete**d eventurally.  For the linked list, if we make *head* a smart pointer and make the *ll_node.right* pointer smart, the destructors will delete the memory like dominoes falling!

#### Steps
In *LinkedList.h*

1.  ``` #include <memory>```
2. Change *right* in *ll_node* to a ```unique_ptr<ll_node>```
3. *next()* will need to be modified as a result - what should you do?
4. Change *head* in *LinkedList* to a unique pointer
5. In *add*, in the initial case when *head* is being set, use **reset** to set the managed pointer
6. Remove the destructor
7. Prove that copy construction is not allowed even if *LinkedList* doesn't delete it's copy ctor.

---
*Challenge*

In the second example, we modify linked list to use shared pointers and we create aliases to simplify usage.

