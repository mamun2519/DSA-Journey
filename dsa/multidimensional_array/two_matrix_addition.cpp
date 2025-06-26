#include <bits/stdc++.h>
using namespace std;

int main()
{
      int r, c;
      cin >> r >> c;

      int A[r][c] = {{2, 5}, {5, 6}};
      int B[r][c] = {{3, 5}, {2, 9}};
      int Sum[r][c];

      for (int i = 0; i < r; i++)
      {
            for (int j = 0; j < c; j++)
            {
                  Sum[i][j] = A[i][j] + B[i][j];
            }
      }
      return 0;
}