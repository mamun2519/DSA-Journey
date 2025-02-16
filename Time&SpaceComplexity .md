# Time & Space Complexity

When analyzing algorithms, time complexity and space complexity are two key metrics used to evaluate their efficiency. These complexities help us understand how an algorithm performs as the input size grows. Below is a detailed explanation of both concepts, along with examples.

# 1. Time complexity

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

# **2. Space Complexity**

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

- The algorithm's memory usage grows logarithmically with the input size.
- Example: Recursive algorithms with balanced recursion depth (e.g., binary search).

```cpp
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, mid + 1, right, target);
    return binarySearch(arr, left, mid - 1, target); // O(log n) space
}
```

# Examples of Time and Space Complexity

### **Example 1: Linear Search**

- **Time Complexity**: O(n) (worst case).
- **Space Complexity**: O(1) (no extra space used).

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}
```

### Example 2: Merge Sort

- **Time Complexity**: O(n log n).
- **Space Complexity**: O(n) (due to auxiliary arrays used in merging).

```cpp
void merge(int arr[], int left, int mid, int right) {
    // Merges two sorted subarrays
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

### Example 3: Fibonacci (Memoization)

- **Time Complexity**: O(n) (due to memoization).
- **Space Complexity**: O(n) (due to memoization table).

```cpp
int fibMemo(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    vector<int> memo(n + 1, -1);
    return fibMemo(n, memo);
}
```

### There are 3 different notation use notation

- Big - 0 ⇒ Worst Case
- Big - Omega ⇒ Best Case
- Big Tita ⇒ Average Case

# Problem Solve

**Task 1: Find the Maximum Element in an Array**

⇒ Given an array of integers, find the maximum element.

**solution**

```cpp
#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
      int max = arr[0];
      for (int i = 0; i < size; i++)
      {
            if (arr[i] > max)
            {
                  max = arr[i];
            }
      }
      return max;
}

int main()
{
      int arr[] = {10, 20, 300, 40, 50, 800};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      return 0;
}
```

### Complexity Analysis:

- **Time Complexity**: O(n)
  - We traverse the array once, so the time complexity is linear.
- **Space Complexity**: O(1)
  - We use a constant amount of extra space (a single variable `max`).

**Task 2: Check if an Array is Sorted**

⇒ Given an array of integers, check if it is sorted in non-decreasing order.

**solution**

```cpp

bool isSorted(int arr[], int size)
{
      for (int i = 1; i < size; i++)
      {

            if (arr[i] < arr[i - 1])
            {
                  return false;
            }
      }
      return true;
}

int main()
{
      int arr[] = {10, 20, 50, 40, 300, 800};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      cout << "Is the array sorted ?" << (isSorted(arr, size) ? "Yes" : "No") << endl;
      return 0;
}
```

### Complexity Analysis:

- **Time Complexity**: O(n)
  - We traverse the array once, so the time complexity is linear.
- **Space Complexity**: O(1)
  - We use a constant amount of extra space.

**Task 3: Reverse an Array**

⇒ Given an array of integers, reverse the array in place.

**Solution:**

```cpp

void reverseArray(int arr[], int size)
{
      int start = 0;
      int end = size - 1;
      for (int i = 0; i < size; i++)
      {
            if (start < end)
            {
                  swap(arr[start], arr[end]);
                  start++;
                  end--;
            }
      }
}

int main()
{
      int arr[] = {10, 20, 40, 50, 300, 800, 500};
      int size = sizeof(arr) / sizeof(arr[0]);


      //* Reverse real array
      reverseArray(arr, size);
      for (int i = 0; i < size; i++)
      {
            cout << arr[i] << endl;
      }
      return 0;
}
```

### Complexity Analysis:

- **Time Complexity**: O(n)
  - We traverse half of the array, so the time complexity is linear.
- **Space Complexity**: O(1)
  - We use a constant amount of extra space.

**Task 4: Find the Second Largest Element in an Array**

⇒ Given an array of integers, find the second largest element.

**Solution:**

```cpp
int findSecondLargest(int arr[], int size)
{
      int firstElement = INT_MIN;
      int secondElement = INT_MIN;
      for (int i = 0; i < size; i++)
      {
            if (arr[i] > firstElement)
            {
                  secondElement = firstElement;
                  firstElement = arr[i];
            }
            else if (arr[i] > secondElement && arr[i] != firstElement)
            {
                  secondElement = arr[i];
            }
      }

      return secondElement;
}



int main()
{
      int arr[] = {10, 20, 40, 50, 300, 800, 500};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      cout << "Is the array sorted ?" << (isSorted(arr, size) ? "Yes" : "No") << endl;

      //* Reverse real array
      reverseArray(arr, size);
      for (int i = 0; i < size; i++)
      {
            cout << arr[i] << endl;
      }
      cout << "Secend Largest Element is " << findSecondLargest(arr, size) << endl;
      return 0;
}
```

**Task 5: Find the Duplicate Number in an Array**

⇒ Given an array of integers where one number is duplicated, find the duplicate number.

**Solution:**

```cpp
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; // No duplicate found
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Duplicate number: " << findDuplicate(arr, size) << endl;
    return 0;
}
```
