# Time & Space Complexity

When analyzing algorithms, time complexity and space complexity are two key metrics used to evaluate their efficiency. These complexities help us understand how an algorithm performs as the input size grows. Below is a detailed explanation of both concepts, along with examples.

## 1. Time complexity

⇒ Not The actual time token but the amount of time taken as a function of input size (n)

⇒ Time complexity measures the amount of time an algorithm takes to complete as a function of the input size (`n`). It is usually expressed using **Big O notation** (e.g., O(n), O(log n), O(n²)).

## Common Time Complexities

### **1. O(1) - Constant Time**:

- The algorithm takes the same amount of time regardless of the input size.
- Example: Accessing an element in an array or vector.

```cpp
int accessElement(int arr[], int index) {
    return arr[index]; // O(1)
}
```

### 2. **O(log n) - Logarithmic Time**:

- The algorithm's runtime grows logarithmically with the input size.
- Example: Binary search in a sorted array.

```cpp
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // O(log n)
}
```

### **3. O(n) - Linear Time**:

- The algorithm's runtime grows linearly with the input size.
- Example: Linear search in an array.

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1; // O(n)
}
```

### 4. **O(n log n) - Linearithmic Time**:

- The algorithm's runtime grows in proportion to `n log n`.
- Example: Efficient sorting algorithms like Merge Sort and Quick Sort.

```cpp
void mergeSort(int arr[], int size) {
    // Implementation of Merge Sort (O(n log n))
}
```

### **5. O(n²) - Quadratic Time**:

- The algorithm's runtime grows quadratically with the input size.
- Example: Bubble Sort, Selection Sort.

```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    } // O(n²)
}
```

### **6. O(2ⁿ) - Exponential Time**:

- The algorithm's runtime doubles with each additional input.
- Example: Recursive Fibonacci without memoization.

```cpp
The algorithm's runtime doubles with each additional input.

Example: Recursive Fibonacci without memoization.
```

## **2. Space Complexity**

Space complexity measures the amount of memory an algorithm uses as a function of the input size (`n`). It includes both **auxiliary space** (extra space used by the algorithm) and the space used by the input.

## **Common Space Complexities**

### **1. O(1) - Constant Space**:

- The algorithm uses a fixed amount of memory regardless of the input size.
- Example: Iterative algorithms with a few variables.

```cpp
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total; // O(1) space
}
```

### **2. O(n) - Linear Space**:

- The algorithm's memory usage grows linearly with the input size.
- Example: Storing an array or a dynamic data structure like a vector.

```cpp
vector<int> createVector(int n) {
    vector<int> v(n);
    return v; // O(n) space
}
```

### **3. O(n²) - Quadratic Space**:

- The algorithm's memory usage grows quadratically with the input size.
- Example: Storing a 2D matrix.

```cpp
int** createMatrix(int n) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    return matrix; // O(n²) space
}
```

### Problem Solve

Problem 01: Prime Number - Time complexity

Problem 02: Selection Sort - Time Complexity

Problem 03: Recursive Fibonacci - Time & Space Complexity

Problem 04: Merge Sort - Time & Space Complexity
