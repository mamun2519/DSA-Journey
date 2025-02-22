# Concept Of Binary Search

Binary Search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. This process continues until the value is found or the interval is empty.

## Key Features of Binary Search

1. **Works on Sorted Data:**

- Binary search requires the input array to be sorted in ascending or descending order.

2. **Time Complexity:**

- O(log n): Much faster than linear search (O(n)) for large datasets.

Space Complexity:

O(1): Uses a constant amount of extra space.
