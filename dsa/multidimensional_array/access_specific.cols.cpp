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
      int index;
      cin >> index;
      // specific cols find
      for (int i = 0; i < row; i++)
      {
            cout << arr[i][index] << " ";
      }
      return 0;
}