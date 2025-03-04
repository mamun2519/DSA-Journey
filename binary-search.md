# Concept Of Binary Search

Binary Search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. This process continues until the value is found or the interval is empty.

## Key Features of Binary Search

1. **Works on Sorted Data:**

- Binary search requires the input array to be sorted in ascending or descending order.

2. **Time Complexity:**

- O(log n): Much faster than linear search (O(n)) for large datasets.

3. **Space Complexity:**

- O(1): Uses a constant amount of extra space.

## How Binary Search Works

1. Start with the entire sorted array.

2. Compare the target value with the middle element of the array.

   - If the target value is equal to the middle element, return the index.

   - If the target value is less than the middle element, search the left half.

   - If the target value is greater than the middle element, search the right half.

3. Repeat the process until the target is found or the search interval is empty.

## Binary Search Algorithm (Iterative Approach)

```js
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
```

## Binary Search Algorithm (Recursive Approach)

```js
#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Base case: target not found
    }
    int mid = left + (right - left) / 2; // Avoids overflow
    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target); // Search right half
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target); // Search left half
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearchRecursive(arr, 0, size - 1, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
```

### Complexity Analysis

**Time Complexity**

- O(log n):

  - The search space is halved in each step, leading to a logarithmic number of comparisons.

**Space Complexity**

- Iterative Approach: O(1) (constant space).

- Recursive Approach: O(log n) (due to the recursion stack).

## Advantages of Binary Search

- Efficient: Much faster than linear search for large datasets.

- Simple: Easy to implement once the array is sorted.

## Disadvantages of Binary Search

- Requires Sorted Data: The array must be sorted before applying binary search.

- Not Suitable for Linked Lists: Binary search requires random access, which is not efficient in linked lists.

## Problem Solving

- **1: Single Element In sorted Array**

```cpp
arr = [1,1,,2,3,3,4,4,88]
```

- **Book Allocation Problem**
