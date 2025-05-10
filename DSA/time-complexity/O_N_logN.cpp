#include <bits/stdc++.h>
using namespace std;

void loopLog(int n) // O(N log N) time complexity
{
      for (int i = 0; i < n; i++)
      {
            int x = n;
            while (x > 0)
            {
                  x /= 2;
            }
      }
}
{
      for (int i = 0; i < n; i++)
      {
            int x = n;
            while (x > 0)
            {
                  x /= 2;
            }
      }
}

int main()
{

      // example 1
      // O(N log N) time complexity
      // O(N) space complexity
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      sort(arr.begin(), arr.end()); // O(N log N)
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
      // example 2
      // O(N log N) time complexity
      // O(N) space complexity
      int m;
      cin >> m;
      vector<int> arr1(m);
      for (int i = 0; i < m; i++)
      {
            cin >> arr1[i];
      }
      sort(arr1.begin(), arr1.end()); // O(N log N)
}