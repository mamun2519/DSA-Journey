#include <bits/stdc++.h>
using namespace std;

void printPairs(int n) // O(N^2) time complexity
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << i << ", " << j << endl;
            }
      }
}
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << i << ", " << j << endl;
            }
      }
}

int main()
{

      // O(N^2) time complexity
      // O(1) space complexity
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << arr[i] << " " << arr[j] << endl;
            }
      }
      return 0;
}