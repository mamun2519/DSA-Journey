#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      // reverse the array using two pointer approach

      int left = 0, right = n - 1;

      while (left < right)
      {
            swap(arr[left], arr[right]);
            left++;
            right--;
      }
}