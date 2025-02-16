#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
      int max = arr[0];
      for (int i = 0; i < size; i++)
      {
            if (arr[i] > max)
            {
                  max = arr[i];
            }
      }
      return max;
}

/* bool isSorted(int arr[], int size)
{
      for (int i = 1; i < size; i++)
      {

            if (arr[i] < arr[i - 1])
            {
                  return false;
            }
      }
      return true;
} */

int main()
{
      int arr[] = {10, 20, 50, 40, 300, 800};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      cout << "Is the array sorted ?" << (isSorted(arr, size) ? "Yes" : "No") << endl;
      return 0;
}