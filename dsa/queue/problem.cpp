#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            vector<int> a(2), b(2);
            cin >> a[0] >> a[1];
            cin >> b[0] >> b[1];

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (a == b)
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