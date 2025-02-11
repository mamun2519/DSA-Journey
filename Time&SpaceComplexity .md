# Time & Space Complexity

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
