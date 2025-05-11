#include <bits/stdc++.h>
using namespace std;

// find duplicate value using binary search
bool findIsDuplicate(int array[], int n, int searchTerm)
{
      int left_side = 0;
      int right_side = n - 1;

      while (left_side <= right_side)
      {
            int middle_index = (left_side + right_side) / 2;

            if (searchTerm == array[middle_index])
            {
                  if (array[middle_index - 1] == searchTerm || array[middle_index + 1] == searchTerm)
                  {
                        return true;
                  }
                  else
                  {
                        return false;
                  }
            }

            else if (array[middle_index] < searchTerm)
            {
                  left_side = middle_index + 1;
            }
            else
            {
                  right_side = middle_index - 1;
            }
      }
}
int main()
{
      int n;
      cin >> n;
      int array[n];
      for (int i = 0; i < n; i++)
      {
            cin >> array[i];
      }

      int searchTerm;
      cin >> searchTerm;

      bool isDuplicate = findIsDuplicate(array, n, searchTerm);
      cout << isDuplicate;
      if (isDuplicate)
            cout << "true";
      else
            cout << "false";
      return 0;
}