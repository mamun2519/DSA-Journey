#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt
int main()
{
      int row, cols;
      cin >> row >> cols;
      int a[row][cols];
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cin >> a[i][j];
            }
      }
      int b[row][cols];
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cin >> b[i][j];
            }
      }
      // calculate matrix sumation

      int c[row][cols];
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  c[i][j] = a[i][j] + b[i][j];
            }
      }

      // pint the c matrix

      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cout << c[i][j] << " ";
            }
            cout << endl;
      }
      return 0;
}