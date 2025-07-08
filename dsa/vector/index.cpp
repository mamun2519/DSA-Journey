#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            v.push_back(x);
      }

      // pint the victor
      for (int i = 0; i < v.size(); i++)
      {
            cout << v[i];
      }
      return 0;
}