#include <bits/stdc++.h>
using namespace std;

int main()
{
      int r = 2, c = 2;
      // cin >> r >> c;

      int A[2][2] = {{2, 5}, {5, 6}};
      int B[2][2] = {{3, 5}, {2, 9}};
      int Sum[2][2];

      for (int i = 0; i < r; i++)
      {
            for (int j = 0; j < c; j++)
            {
                  Sum[i][j] = A[i][j] + B[i][j];
            }
      }

      // pint
      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < 2; j++)
            {
                  cout << Sum[i][j] << " ";
            }
            // cout << endl;
      }

      return 0;
}