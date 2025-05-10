#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int *A = new int[n];

      for (int i = 0; i < n; i++)
      {
            cin >> A[i];
      }

      int m;
      cin >> m;

      int *B = new int[m];

      // Copy A into B
      for (int i = 0; i < n; i++)
      {
            B[i] = A[i];
      }

      delete[] A;

      // Input remaining elements of B
      for (int i = n; i < m; i++)
      {
            cin >> B[i];
      }

      // Print B
      for (int i = 0; i < m; i++)
      {
            cout << B[i] << " ";
      }

      delete[] B;

      return 0;
}
