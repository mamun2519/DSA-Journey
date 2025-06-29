#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int n, m;
      cin >> n, m;
      int arr[n][m];

      // take the input
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; m++)
            {
                  cin >> arr[i][j];
            }
      }

      // pint the matrix
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}