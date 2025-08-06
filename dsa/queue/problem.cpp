#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt
bool isPossible(int a1, int b1, int a2, int b2)
{
      queue<pair<int, int>> q;
      set<pair<int, int>> visited;

      q.push({a1, b1});
      visited.insert({a1, b1});

      while (!q.empty())
      {
            auto [g, s] = q.front();
            q.pop();

            if (g == a2 && s == b2)
                  return true;

            // Limit to avoid infinite loop
            if (g < 0 || s < 0 || g > 1000 || s > 1000)
                  continue;

            // Transform 1: gold -> silver
            if (g >= 1 && visited.count({g - 1, s + 5}) == 0)
            {
                  q.push({g - 1, s + 5});
                  visited.insert({g - 1, s + 5});
            }

            // Transform 2: silver -> gold
            if (s >= 5 && visited.count({g + 1, s - 5}) == 0)
            {
                  q.push({g + 1, s - 5});
                  visited.insert({g + 1, s - 5});
            }

            // Transform 3: discard both
            if (g >= 1 && s >= 1 && visited.count({g - 1, s - 1}) == 0)
            {
                  q.push({g - 1, s - 1});
                  visited.insert({g - 1, s - 1});
            }
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