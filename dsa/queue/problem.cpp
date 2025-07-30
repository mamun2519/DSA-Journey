#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> v;
      v = {2, 7, 11, 15};
      int target = 26;

      vector<int> ans;
      for (int i = 0; i < v.size(); i++)
      {
            for (int j = i + 1; j < v.size(); j++)
            {
                  if (v[i] + v[j] == target)
                  {
                        ans.push_back(i);
                        ans.push_back(j);
                        break;
                  }
            }
            if (!ans.empty())
                  break;
      }
      if (ans.size())
      {
            cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
      }
      else
      {
            cout << "No pair found" << endl;
      }
}