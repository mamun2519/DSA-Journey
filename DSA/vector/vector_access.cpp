#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> ages = {5, 7, 8, 2, 8};

      // access the element
      cout << ages.back();
      cout << ages.front();

      for (int i = 0; i < ages.size(); i++)
      {
            cout << ages[i] << " ";
      }
      // different
      cout << endl;
      for (auto it = ages.begin(); it < ages.end(); it++)
      {
            cout << *it << " ";
      }
      return 0;
}