#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &st, int current, int middle)
{
      if (current == middle)
      {
            st.pop();
            return;
      }

      int topElement = st.top();
      st.pop();
      // recersive
      deleteMiddle(st, current + 1, middle);
      st.push(topElement);
}
int main()
{
      int n;
      cin >> n;
      stack<int> st;
      // take the input
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            st.push(x);
      }

      int size = st.size();
      int middle = size / 2;
      stack<int> st2;
      deleteMiddle(st2, 0, middle);

      while (!st2.empty())
      {
            cout << st.top() << " ";
            st.pop();
      }
      cout << endl;
      return 0;
}