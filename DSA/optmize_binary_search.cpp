#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int array[], int searchTerm, int n)
{

      int flag = false;
      int left_side = 0;
      int right_side = n - 1;

      while (left_side <= right_side)
      {
            int mid_index = (left_side + right_side) / 2;

            if (array[mid_index] == searchTerm)
            {
                  flag = true;
                  break;
            }
            if (searchTerm > array[mid_index])
            {
                  left_side = mid_index + 1;
            }
            else
            {
                  right_side = mid_index - 1;
            }
      }

      return flag;
};

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
      int flag = binarySearch(array, searchTerm, n);

      if (flag == true)
            cout << "SearchTerm Find Successfully!";
      else
            cout << "Opps! SearchTerm Does not find!";

      return 0;
}