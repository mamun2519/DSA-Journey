#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int database[n];
      for (int i = 0; i < n; i++)
      {

            cin >> database[i];
      }

      // receive search value
      int searchTerm;
      cin >> searchTerm;

      int left_side = 0;
      int right_side = n - 1;
      int flag = false;

      while (left_side <= right_side)
      {
            // define mid index
            int mid_index = (left_side + right_side) / 2;

            if (database[mid_index] == searchTerm)
            {
                  flag = true;
                  break;
            }
            if (searchTerm > database[mid_index])
            {
                  left_side = mid_index + 1;
            }
      }

      return 0;
}