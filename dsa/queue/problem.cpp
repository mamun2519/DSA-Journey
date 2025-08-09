#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--)
      {
            string s;
            cin >> s;

            int balance = 0;
            bool valid = true;

            for (char c : s)
            {
                  if (c == '(')
                  {
                        balance++;
                  }
                  else
                  { // c == ')'
                        balance--;
                        if (balance < 0)
                        { // more ')' than '('
                              valid = false;
                              break;
                        }
                  }
            }

            if (balance != 0)
                  valid = false;

            cout << (valid ? 1 : 0) << "\n";
      }
      return 0;
}