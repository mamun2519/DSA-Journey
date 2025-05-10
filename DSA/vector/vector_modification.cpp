#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> roll = {3, 5, 7, 8};
      // roll.pop_back();
      roll.insert(roll.begin() + 4, 6);

      vector<int> v2 = {100, 101, 102, 103};

      roll.insert(roll.begin() + 5, v2.begin(), v2.end());

      // delete element from specific possiton

      roll.erase(roll.begin());
      for (int i = 0; i < roll.size(); i++)
      {
            cout << roll[i] << endl;
      }
      return 0;
}