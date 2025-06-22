#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int arr[n + 1];
      // receive the array
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      // take the target a value and index
      int targetIndex;
      int value;
      cin >> targetIndex >> value;

      // assign the target value
      for (int i = n - 1; n >= targetIndex; i--)
      {
            arr[i + 1] = arr[i];
      }

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      // pint the array
      return 0;
}