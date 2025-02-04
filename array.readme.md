# Array Data Structure (1st chapter)

### What Is DSA?

⇒ DSA is about **_finding efficient ways to store and retrieve data_**, to perform operations on data, and to solve specific problems.

### Many Types Of Data

- Linear
- Hierarchial
- **Linear data structure:** Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure.
  Examples of linear data structures are array, stack, queue, linked list, etc.
  Static data structure: Static data structure has a fixed memory size. It is easier to access the elements in a static data structure.
  An example of this data structure is an array.
  Dynamic data structure: In the dynamic data structure, the size is not fixed. It can be randomly updated during the runtime which may be considered efficient concerning the memory (space) complexity of the code.
  Examples of this data structure are queue, stack, etc.
- **Non-linear data structure:** Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only.
  Examples of non-linear data structures are trees and graphs.

### What Is Algorithm

⇒ An algorithm is **_a finite sequence of well-defined instructions_** that can be used to solve a computational problem.

## Array Data Structure explanation

- The same types of data stored in an array
- array in contiguous memory
- array in linear
- array every element memory consium 4 bytes
- Its Non Primitive data Types

### array Syntax

```cpp
int marks[5] = {33, 55,50,21,90,50}
```

**Access Array Data using Index**

- Index start 0

```cpp
cout << marks[3] // define index
```

**Loops used in the array**

- if you need to calculate array size use ⇒ sizeof() / sizeof(int)

```cpp
int marks[5] = {33, 55,50,21,90,50}
int size = 5
for(int i=0; i <size; i++){
cout << marks[i] << endl}
```

**Solve This Problem Loops on Array**

**Problem 01:** find the largest numbers in array

```cpp

int main()
{
      int numbers[] = {2, 9, 6, 8, 2, 0};
      int size = 6;
      int maxNumber = 0;
      for (int i = 0; i < size; i++)
      {
            if (numbers[i] > maxNumber)
            {
                  maxNumber = numbers[i];
            }
      }
      cout << maxNumber << endl;
      return 0;
}

Note: use can use min func
ex: min(numbers[i], smallest)
```

**Problem 02:** find the smallest number in array

```cpp
int main()
{
      int numbers[] = {2, 9, 6, 8, 2, 0, -5};
      int size = 7;
      int smallNumber;
      for (int i = 0; i < size; i++)
      {
            if (numbers[i] < smallNumber)
            {
                  smallNumber = numbers[i];
            }
      }
      cout << smallNumber << endl;
      return 0;
}
```

# **Pass By Reference/ Address**

- if you create an array and change an element in the array that means pass by reference
- In C++, a collection of elements stored in contiguous memory locations and having the same data type is called an array. Passing arrays to functions is done to perform various operations on array elements without messing up with the main code.
- That Means change original aray

**1. Pass by Reference**

When you pass by reference, you pass the variable itself (not a copy) to the function. The function operates on the original variable, so any changes made inside the function affect the original data.

### Syntax:

- Use the `&` symbol in the function parameter to indicate a reference.

```cpp
#include <iostream>
using namespace std;

// Function to swap two integers using pass by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y); // Pass x and y by reference

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
```

### Output:

```
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
```

### Key Points:

- The function parameter uses `&` to indicate a reference.
- Changes made to the parameters inside the function affect the original variables.
- No need to use pointers or dereferencing.

### 2. Pass by Address (Using Pointers)

When you pass by address, you pass the memory address of the variable to the function. The function uses pointers to access and modify the original data.

### Syntax:

- Use the `` symbol in the function parameter to indicate a pointer.

```cpp
#include <iostream>
using namespace std;

// Function to swap two integers using pass by address
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y); // Pass addresses of x and y

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
```

### Output:

Copy

```
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
```

### Key Points:

- The function parameter uses `` to indicate a pointer.
- You must pass the address of the variable using the `&` operator.
- Inside the function, you must dereference the pointer (``) to access or modify the original data.

# Liner Search In Array

**⇒ Linear search algorithm** is the simplest searching algorithm that is used to find an element in the given collection. It simply compares the element to find with each element in the collection one by one till the matching element is found or there are no elements left to compare.

- Define target
- need array
- need size
- map in array
- check target element qual in array each element

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
   int numbers[]  = {1, 2, 3, 4, 5, 8, 9, 11};
   int size = 8
    // Element to be searched
    int target  = 5;

    for( int i =0; i < size; i++){
    if (numbers[i] == target){
     retune i
     }
     else{
     retune -1
     }

    return 0;
}
```

# Reverse An Array

- use Tow Pointer Approach

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
   int numbers[]  = {1, 2, 3, 4, 5, 8, 9, 11};
   int size = 8
  int start = 0, end = size-1;

  while (start < end){
  swap(array[start], arry[end]);
  start++;
  end---;
}}
```
