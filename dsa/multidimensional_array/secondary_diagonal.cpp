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
      /// find the secendary daigonal

      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {

                  if (i + j == row - 1)
                  {
                        cout << arr[i][j] << " ";
                  }
            }
      }
      return 0;
}