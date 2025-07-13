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
                        st.pop();
                  }
                  else if (c == '}' && st.top() == '{')
                  {
                        st.pop();
                  }
                  else if (c == ']' && st.top() == '[')
                  {
                        st.pop();
                  }
                  else
                  {
                        st.push(c);
                  }
            }
      }

      // print the valid or not
      if (!st.empty())
      {
            cout << "Parentheses is invalid";
      }
      else
      {
            cout << "Parentheses is valid";
      }

      return 0;
}