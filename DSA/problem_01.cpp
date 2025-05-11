#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int searchTerm, int n)
{

      int duplicate = 0;
      int left_side = 0;
      int right_side = n - 1;

      while (left_side <= right_side)
      {
            int mid_index = (left_side + right_side) / 2;

            if (array[mid_index] == searchTerm)
            {
                  duplicate = duplicate + 1;
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

      return duplicate;
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
      int duplicate = binarySearch(array, searchTerm, n);

      if (duplicate == 1)
            cout << false;
      else
            cout << true;

      return 0;
}