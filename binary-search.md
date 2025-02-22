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
