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

````cpp
vector<int> v = {10, 20, 30};
cout << v[0]; // Output: 10
cout << v.at(1); // Output: 20
cout << v.front(); // Output: 10
cout << v.back(); // Output: 30
`

### . **Removing Elements**

- **`pop_back()`**: Removes the last element.
- **`erase()`**: Removes elements at a specific position or range.
- **`clear()`**: Removes all elements.

```cpp
vector<int> v = {10, 20, 30};
v.pop_back(); // Removes 30
v.erase(v.begin() + 1); // Removes 20
v.clear(); // Clears the vector
````

### **Size and Capacity**

- **`size()`**: Returns the number of elements in the vector.
- **`capacity()`**: Returns the current storage capacity of the vector.
- **`resize()`**: Changes the size of the vector.
- **`empty()`**: Checks if the vector is empty.

```csharp
vector<int> v = {10, 20, 30};
cout << v.size(); // Output: 3
cout << v.capacity(); // Output: 3 (or more, depending on implementation)
v.resize(5); // Resizes the vector to 5 elements
cout << v.empty(); // Output: 0 (false)
```

### . **Iterators**

- **`begin()`**: Returns an iterator to the first element.
- **`end()`**: Returns an iterator to the element after the last element.
- **`rbegin()`**: Returns a reverse iterator to the last element.
- **`rend()`**: Returns a reverse iterator to the element before the first element.

```cpp
vector<int> v = {10, 20, 30};
for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " "; // Output: 10 20 30
}
```

### 6. **Insertion**

- **`insert()`**: Inserts elements at a specific position.

```cpp
vector<int> v = {10, 20, 30};
v.insert(v.begin() + 1, 15); // Inserts 15 at index 1
// v = {10, 15, 20, 30}
```

## Advantages of Vectors

1. **Dynamic Resizing**: Automatically adjusts size as elements are added or removed.
2. **Efficient Access**: Provides constant-time access to elements using indices.
3. **Rich Functionality**: Comes with many built-in functions for common operations.
4. **Memory Management**: Handles memory allocation and deallocation automatically.

---

## Disadvantages of Vectors

1. **Overhead**: Slightly more overhead compared to traditional arrays due to dynamic resizing.
2. **Insertion/Deletion in the Middle**: Can be inefficient (O(n)) due to element shifting.

---

## When to Use Vectors

- When you need a dynamic array that can grow or shrink in size.
- When you want automatic memory management.
- When you need frequent access to elements using indices.

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

# Array and vectors Problem-solving

- Problem 01: Maximum Subarray Sum
- Problem 02: Maximum Subarray sum

brute Force Approach

```cpp
{3, -4,5,4,-1,7,-8}
```

- Problem 03: Pair Sum ⇒ return pair in sorted array with target sum
