#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      stack<int> st;
      // take input
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            st.push(x);
      }

      // sumation
      int sum = 0;
      while (!st.empty())
      {
            int topValue = st.top();
            sum += topValue;
            st.pop();
      }

      // total sum
      cout << "total Sum" << sum;
      return 0;
}