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

### Vector Function

- size
- push_back
- pop_back
- fornt
- back
- at

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
