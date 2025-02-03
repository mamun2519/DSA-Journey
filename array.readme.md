## Array Data Structure (1st chapter)

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
