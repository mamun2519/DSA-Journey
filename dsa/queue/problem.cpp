#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt
bool isPossible(int a1, int b1, int a2, int b2)
{
      // Check if the first pair can be transformed into the second pair
      if (a1 == a2 && b1 == b2)
      {
            return true;
      }
      // Check if the first pair can be transformed into the second pair by swapping
      if (a1 == b2 && b1 == a2)
      {
            return true;
      }
      // Check if the first pair can be transformed into the second pair by adding or subtracting
      if (abs(a1 - a2) == abs(b1 - b2))
      {
            return true;
      }
      return false;
}
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int a1, b1, a2, b2;
            cin >> a1 >> b1;
            cin >> a2 >> b2;

            if (isPossible(a1, b1, a2, b2))
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
      }
      return 0;
}