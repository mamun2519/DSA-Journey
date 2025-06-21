#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      // take input for the array
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      // receive index
      int index;
      cin >> index;

      // shift elements to the left
      for (int i = index + 1; i < n; i++)
      {
            arr[i - 1] = arr[i];
      }

      // pint the array after deletion
      for (int i = 0; i < n - 1; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}