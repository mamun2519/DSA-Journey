#include <bits/stdc++.h>
using namespace std;

int main()
{

      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      // right side one time rotated
      int lastIndex = arr[n - 1];
      cout << "last index" << arr[n - 1];
      return 0;
}