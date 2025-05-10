# Sorting algorithms

Sorting algorithms are methods used to arrange elements of a list or array in a specific order (e.g., ascending or descending). Sorting is a fundamental operation in computer science and is used in various applications like searching, data analysis, and database management.

Below is an overview of common sorting algorithms, their time complexity, space complexity, and key characteristics.

## 1. Bubble Sort

- **How it works:** Repeatedly swaps adjacent elements if they are in the wrong order.

- **Time Complexity:**

      - **Best:** O(n) (when the array is already sorted).

      - **Average/Worst:** O(n²).

- **Space Complexity:** O(1) (in-place sorting).

- **Stable:** Yes.

- **Use Case:** Simple and easy to implement, but inefficient for large datasets.

### Example

```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

## 2. Selection Sort

- **How it works:** Repeatedly selects the smallest (or largest) element from the unsorted portion and swaps it with the first unsorted element.

- **Time Complexity:**

      - **Best/Average/Worst:** O(n²).

      - **Space Complexity:** O(1) (in-place sorting).

      - **Stable:** No.

- **Use Case:** Simple but inefficient for large datasets.

### Example

```cpp
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
```

## 3. Insertion Sort

- **How it works:** Builds the sorted array one element at a time by inserting each element into its correct position in the sorted portion.

- **Time Complexity:**

      - **Best:** O(n) (when the array is already sorted).

      - **Average/Worst:** O(n²).

- **Space Complexity:** O(1) (in-place sorting).

- **Stable:** Yes.

- **Use Case:** Efficient for small datasets or nearly sorted arrays.

### Example

```cpp
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```
