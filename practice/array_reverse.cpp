#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      // reverse the array

      for (int i = 0; i < n / 2; i++)
      {
            cout << "N =>" << n << endl;
            cout << "I =>" << i << endl;
            cout << "Total ==>" << n - i - 1 << endl;
            swap(arr[i], arr[n - i - 1]);
      }

      // pint
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}