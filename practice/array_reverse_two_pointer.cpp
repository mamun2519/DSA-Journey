#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      int left = 0;
      int right = n - 1;
      while (left < right)
      {
            swap(arr[left], arr[right]);
            right--;
            left++;
            /* code */
      }

      // pint
      for (int i = 0; i < n - 1; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}