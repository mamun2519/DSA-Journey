#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            string s;
            cin >> s;
            stack<char> st;
            bool valid = true;
            for (char c : s)

                  for (char c : s)
                  {
                        if (c == '{')
                        {
                              st.push(c);
                        }
                        else
                        {
                              if (st.empty())
                              {
                                    valid = false;
                                    break;
                              }
                              st.pop();
                        }
                  }
            if (!st.empty())
                  valid = false;

            cout << (valid ? 1 : 0) << "\n";
      }

      return 0;
}