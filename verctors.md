# Vectors In C++

- It Look Like array
- Its dynamic nature
- not fixed size. every time change
- call header fine ⇒ incule header file <vector>
- vector use foreach lop
- stl tool⇒ stand template lib
  - vector
  - que
  - stack
  - set

## Key Features of Vectors

1. **Dynamic Size**: Vectors can grow or shrink in size dynamically.
2. **Contiguous Memory**: Elements are stored in contiguous memory locations, allowing efficient access.
3. **Automatic Memory Management**: Vectors handle memory allocation and deallocation automatically.
4. **Rich Functionality**: Vectors come with many built-in functions for common operations like insertion, deletion, and traversal.

## Declaration and Initialization

To use vectors, you need to include the `<vector>` header file.

```cpp
#include <vector>
using namespace std;

vector<data_type> vector_name;
```

### Vector Syntax

```cpp
vector<int> v1; // Empty vector of integers
vector<string> v2 = {"apple", "banana", "cherry"}; // Vector of strings
vector<double> v3(5, 10.5); // Vector of size 5, all elements initialized to 10.5
```

### Vector Function

- size
- push_back
- pop_back
- fornt
- back
- at

# **Common Operations on Vectors**

### **Adding Elements**

- **`push_back()`**: Adds an element to the end of the vector.
- **`emplace_back()`**: Similar to `push_back()`, but more efficient for certain types (e.g., objects).

```cpp
vector<int> v;
v.push_back(10); // Adds 10 to the end
v.push_back(20); // Adds 20 to the end
v.emplace_back(30); // Adds 30 to the end
```

### **Accessing Elements**

- **`[]` Operator**: Access elements using indices (no bounds checking).
- **`at()`**: Access elements with bounds checking (throws an exception if out of bounds).
- **`front()`**: Access the first element.
- **`back()`**: Access the last element.

```cpp
vector<int> v = {10, 20, 30};
cout << v[0]; // Output: 10
cout << v.at(1); // Output: 20
cout << v.front(); // Output: 10
cout << v.back(); // Output: 30
`

### Static Vs Dynamic Allocation of Memory

- Static data allocates compile time. like array
- dynamic allocation run time
- static memory allocates stack
- dynamic stack allocates heap

**vector Has two property**

- size of
- compactly

**Problem 01:** find a unique element in vectors

use ⇒ bitwise XOR

**Homework**

- liner search implemented in vector
- vector reverse
```
