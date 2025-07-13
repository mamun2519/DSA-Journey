#include <bits/stdc++.h>
using namespace std;

int main()
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
                  if (c == ')' && st.top() == '(')
                  {
                        st.pop()
                  }
            }
      }
      return 0;
}