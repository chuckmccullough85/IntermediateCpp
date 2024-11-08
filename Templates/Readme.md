## Overview
Linked List is not really type specific.  Any kind of pointer could be stored in the list.  In this lab, we convert the circle linked list to a generic template.  There is some tricky syntax to overcome with this demonstration.

| | | 
| --------- | --------------------------- |
| Exercise Folder | Templates  |
| Builds On | LinkedList |
| Time to complete | 30 minutes

---
### Steps
>Note: if you are having problems completing the previous exercise, start with the code in the **Templates** folder

1. To begin, we will modify the declaration of the 3 linked list classes to make them templates.  
2. Replace all occurances of **Circle** with a template parameter **T**.
For example:
```C++
template <typename T>
class ll_node
  private:
  ll_node *next() { return this->right; }
  const T *item() { return data; }
```

3. Modify all three classes, converting them to templates and *lifting* Circle type to the template parameter.
4. Change the name of the linked list class to be more generic (ie *LinkedList*)

Note, the friend declarations are a little different:

```C++
template <typename> friend class linked_list;
```

4. Update *Landscape* to use the template.


---

