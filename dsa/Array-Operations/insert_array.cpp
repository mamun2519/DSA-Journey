#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int n;
      cin >> n;
      int arr[n + 1];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int index, value;
      cin >> index, value;
      // insert the target position
      for (int i = n - 1; i >= n; i--)
      {
            arr[i + 1] = arr[i];
      }

      arr[index] = value;

      for (int i = 0; i <= n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}