# Concept Of Pointer

## Pointers

a pointer in C++ is a variable that stores the memory address of another variable. Pointers are powerful tools that allow you to directly manipulate memory, which can lead to more efficient and flexible code.

## **1. Basics of Pointers**

**Declaration and Initialization**

- A pointer is declared using the `` symbol.
- The `&` operator is used to get the address of a variable.

```cpp
int x = 10;       // Declare an integer variable
int *ptr = &x;    // Declare a pointer and initialize it with the address of x
```

### **Accessing Values**

- Use the `` operator to access the value stored at the memory address the pointer points to (this is called **dereferencing**).
