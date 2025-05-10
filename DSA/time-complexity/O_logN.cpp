#include <bits/stdc++.h>
using namespace std;

void halfCounter(int n) // O(log N) time complexity
{
      while (n > 0)
      {
            cout << n << " ";
            n /= 2;
      }
}

int main()
{

      // Example 1
      //  O(log N) time complexity
      //  O(1) space complexity
      int n;
      cin >> n;
      int ans = 0;
      while (n > 0)
      {
            n /= 2;
            ans++;
      }
      cout << "Logarithm: " << ans << endl;

      // Example 2
      //  O(log N) time complexity
      //  O(1) space complexity
      int x;
      cin >> x;
      int ans1 = 0;
      for (int i = 1; i <= x; i *= 2)
      {
            ans1++;
      }
      cout << "Logarithm: " << ans1 << endl;
      return 0;
}