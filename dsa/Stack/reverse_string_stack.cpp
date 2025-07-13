#include <bits/stdc++.h>
using namespace std;

int main()
{
      string name;
      cin >> name;
      stack<char> st;
      // for (int i = 0; i < size; i++)
      // {
      //       int x;
      //       cin >> x;
      //       st.push(x);
      // }

      for (char c : name)
      {
            st.push(c);
      }

      while (!st.empty())
      {
            cout << st.top();
            // st.pop();
      }

      return 0;
}