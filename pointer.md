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

```cpp
cout << *ptr; // Output: 10 (value of x)
```

## **2. Pointer Operations**

### Assigning Addresses

- You can assign the address of a variable to a pointer.

```cpp
int y = 20;
ptr = &y; // ptr now points to y
cout << *ptr; // Output: 20
```

### Pointer Arithmetic

- Pointers can be incremented or decremented to navigate through memory.
- The size of the data type the pointer points to determines how much the pointer moves.

```cpp
int arr[3] = {10, 20, 30};
int *ptr = arr; // Points to the first element of the array

cout << *ptr; // Output: 10
ptr++;        // Move to the next element
cout << *ptr; // Output: 20
```
