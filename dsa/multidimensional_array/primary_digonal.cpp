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

      // calculate primary daigonal

      int sum = 0;
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  if (i == j)
                  {
                        cout << arr[i][j] << " ";
                        sum = sum + arr[i][j];
                  }
            }
      }
      cout << endl;
      cout << "Total summation is" << " " << sum;

      return 0;
}