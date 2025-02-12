# Time & Space Complexity

When analyzing algorithms, time complexity and space complexity are two key metrics used to evaluate their efficiency. These complexities help us understand how an algorithm performs as the input size grows. Below is a detailed explanation of both concepts, along with examples.

## Time complexity

⇒ Not The actual time token but the amount of time taken as a function of input size (n)

### Big 0 Nation

### Space Complexity

⇒ Amount os space taken by an algorithm as function of input size (n)

### CommonTime Complexities

- O(1) ⇒ Its call constant

  - The sum of numbers from 1 to N

  ```cpp
  int n;
  cin >> n;
  int ans = n * (n+1)/2;

  ```

- O(n) ⇒ Its call liner
  - N fibonacci -DP
  ```cpp
  int fact = 1;
  for (int i =1; i<=n; i++){
  fact *=i;}
  ```
  - Nth Fibonacci -DP
  ```cpp
  for (int i =2; i<=n;i++){
  dp[i] = dp[i-1] + dp[i-2]
  }
  ```
- Bubble sort

```cpp
for (int i =0;i <n-1; i++){
for (int j=0;j<n-i-1; j++){
if(arr[j] > arr[j+1}){
swap(arr[j], arr[j+1)
}}}
```

- O(Logn)
  - Binary Search
- O(nlogn)
  - soting
  - merge sort
  - quick sort
- O(2^n)
  - recursion

### Problem Solve

Problem 01: Prime Number - Time complexity

Problem 02: Selection Sort - Time Complexity

Problem 03: Recursive Fibonacci - Time & Space Complexity

Problem 04: Merge Sort - Time & Space Complexity
