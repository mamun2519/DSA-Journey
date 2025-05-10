/*

Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
InputCopy
4
5 1 3 2
OutputCopy
2 3 1 5 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      vector<int> A(n);
      for (int i = 0; i < n; i++)
      {
            cin >> A[i];
      }

      vector<int> B(n);
      B.insert(B.end(), B.end(), B.begin());

      for (int i = 0; i < B.size(); i++)
      {
            cout << B[i] << " ";
      }

      return 0;
}