#include <bits/stdc++.h>
using namespace std;

int main()
{
      int row, cols;
      cin >> row >> cols;
      int arr[row][cols];

      for (int i = 0; i < row; i++)
            for (int j = 0; j < cols; j++)
                  cin >> arr[i][j];

      // take the index
      int index;
      cin >> index;

      // find the specific rows
      for (int i = 0; i < cols; i++)
      {
            cout << arr[index][i] << " ";
      }
      return 0;
}