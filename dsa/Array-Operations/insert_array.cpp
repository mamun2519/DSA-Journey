#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int n;
      cin >> n;
      int arr[n + 1];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      // recive index and value to be inserted
      int index, value;
      cin >> index >> value;
      // shift elements to the right
      for (int i = n - 1; i >= index; i--)
      {
            arr[i + 1] = arr[i];
      }
      arr[index] = value; // insert the value at the index
      // pint the array
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}