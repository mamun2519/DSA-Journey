#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
      int max = arr[0];
      for (int i = 0; i < size; i++)
      {
            if (max < arr[i])
            {
                  max = arr[i];
            }
      }
      return 0
}

int main()
{
      int arr[] = {10, 20, 300, 40, 50, 800};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      return 0;
}