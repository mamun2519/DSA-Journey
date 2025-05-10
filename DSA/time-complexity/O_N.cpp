#include <bits/stdc++.h>
using namespace std;

void printOnce(int n) // O(N) time complexity
{
      for (int i = 0; i < n; i++)
      {
            cout << i << " ";
      }
}

int main()
{
      // O(N) time complexity
      // O(N) space complexity
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += arr[i];
      }
      cout << "Sum: " << sum << endl;
      return 0;
}