#include <bits/stdc++.h>
using namespace std;

int main()
{
      int rows, cols;
      cout << "Enter rows and columns" << endl;
      cin >> rows >> cols;

      // allocate rows (step 01)
      int **matrix = new int *[rows];

      // allocate columns in each row(step 02)
      for (int i = 0; i < rows; i++)
      {
            matrix[i] = new int[cols];
      }

      // take the input
      for (int i = 0; i < rows; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cin >> matrix[i][j];
            }
      }

      // pint the matrix
      for (int i = 0; i < rows; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  cout << matrix[i][j] << " ";
            }
            cout << endl;
      }

      // Step 5: Free memory
      //     for (int i = 0; i < rows; i++)
      //         delete[] matrix[i];
      //     delete[] matrix;

      return 0;
}