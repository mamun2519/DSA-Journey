#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      int index;
      cin >> index;
      for (int i = index + 1; i < n; i++)
      {
            arr[i - 1] = arr[i];
      }
      // pint
      for (int i = 0; i < n - 1; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}