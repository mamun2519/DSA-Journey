
/* Problem 1 : Basic Vector Initialization
Description : Write a C++ program to initialize a vector with the integers from 1 to N and print the elements.
Input 10
Output 10 1 2 3 4 5 6 7 8 9 10 */

#include <bits/stdc++.h>
using namespace std;

/* int main()
{
      int n;
      cin >> n;
      vector<int> x(n);

      for (int i = 0; i < x.size(); i++)
      {
            cout << i + 1 << " ";
      }
      return 0;
} */

// ------------------------------------

/*

Problem 2: Vector Initialization with a Fixed Value
Description: Write a C++ program to initialize a vector of size 5 with all elements set to the value N and print the elements.
Input
Output
7
7 7 7 7 7


*/

int main()
{

      int n;
      cin >> n;
      vector<int> x(n);

      for (int i = 0; i < n; i++)
      {
            x.push_back(i);
            cout << x[i] << " ";
            cout << i << " ";
      }

      return 0;
}