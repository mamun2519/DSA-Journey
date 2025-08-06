#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      string s;
      cin >> s;
      int n = s.size();
      sort(s.begin(), s.end());

      if (s == "act")
      {
            cout << "YES" << endl
      }
      else
      {
            cout << "NO" << endl;
      }
      return 0;
}