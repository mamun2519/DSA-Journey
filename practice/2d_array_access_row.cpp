#include <bits/stdc++.h>
using namespace std;

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
      int index;
      cin >> index;
      for (int i = 0; i < cols; i++)
      {
            cout << a[i][index] << " ";
      }

      return 0;
}