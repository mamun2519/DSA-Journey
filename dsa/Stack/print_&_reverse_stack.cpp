#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      stack<int> st;

      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            st.push(x);
      }

      // pint and reverse the array
      while (!st.empty())
      {
            cout << st.top() << " ";
            st.pop();
      }

      return 0;
}