#include <bits/stdc++.h>
using namespace std;

int main()
{

      vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
      int n = arr.size();
      int k = 1;
      for (int i = 1; i < n; i++)
      {
            if (arr[i] == arr[i + 1])
            {
                  k++;
            }
      }
      cout << k << endl;
      return 0;
}