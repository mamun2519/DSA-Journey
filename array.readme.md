# Array Data Structure (1st chapter)

### What Is DSA?

⇒ DSA is about **_finding efficient ways to store and retrieve data_**, to perform operations on data, and to solve specific problems.

### Many Types Of Data

- Linear
- Hierarchial

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

Problem 01: find the smallest / largest in array
Problem 01: find the smallest / largest in array

```cpp
int numbers[] = {5, 15, 222,1,-15,24}
int size = 6 ;
int smallest = INT_Max;
for(int i=0; i <size; i++){
if(numbers[i] < smallest ){
smallest = numbers[i]
}}

Note: use can use min func
ex: min(numbers[i], smallest)
```

# **Pass By Reference/ Address**

- if you create an array and change an element in the array that means pass by reference
- In C++, a collection of elements stored in contiguous memory locations and having the same data type is called an array. Passing arrays to functions is done to perform various operations on array elements without messing up with the main code.
- That Means change original aray

```cpp
#include <iostream>
using namespace std;

// function to update array elements
void printarray(int a[10])
{
    for (int i = 0; i < 5; i++)
        a[i] = a[i] + 5;
}

int main()
{
    // array declaration
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function

    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}
```

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
}
```
