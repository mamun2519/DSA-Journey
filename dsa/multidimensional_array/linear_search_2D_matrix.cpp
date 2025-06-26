#include <bits/stdc++.h>
using namespace std;

int main()
{
      int matrix[3][4] = {{2, 4, 6, 8}, {5, 1, 3, 7}, {20, 50, 90, 80}};
      int target;
      cin >> target;
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  if (matrix[i][j] == target)
                  {
                        cout << "searching value is find";
                  }
                  else
                  {
                        cout << "searching value does not find";
                  }
            }
      }
      return 0;
}