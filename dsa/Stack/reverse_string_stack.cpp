#include <bits/stdc++.h>
using namespace std;

int main()
{
      int size;
      cin >> size;
      stack<char> st;
      for (int i = 0; i < size; i++)
      {
            int x;
            cin >> x;
            st.push(x);
      }

      while (!st.empty())
      {
            cout << st.top();
            st.pop();
      }

      return 0;
}