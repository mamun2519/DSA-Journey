#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            v.push_back(x);
      }

      // pint the victor
      // for (int x : v)
      // {
      //       cout << x << " ";
      // }
      // reverse victor
      // reverse(v.begin(), v.end());

      //  Find Maximum and Minimum

      // sort a vector in descending order
      sort(v.begin(), v.end(), greater<int>());
      // max_element(v.begin(), v.end());
      for (int x : v)
      {
            cout << x << " ";
      }

      return 0;
}