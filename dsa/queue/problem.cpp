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
            for (char c : s)
            {
                  if (c == '(' || c == '{' || c == '[')
                  {
                        st.push(c);
                  }
                  else
                  {
                        if (c == ')' && st.top() == ())
                        {
                        }
                  }
            }
      }

      return 0;
}