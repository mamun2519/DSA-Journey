#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int row, cols;
      cin >> row >> cols;
      int arr[row][cols];

      // take the input
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cin >> arr[i][j];
            }
      }

      // pint the matrix
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}