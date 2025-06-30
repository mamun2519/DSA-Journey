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
      int target;
      cin >> target;
      int found = false;
      // searching
      for (int i = 0; i < row; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  if (a[row][cols] == target)
                  {
                        found = true;
                        break;
                  }
            }
      }

      if (found)
            cout << "will not take number" << endl;
      else
            cout << "will take number" << endl;

      return 0;
}