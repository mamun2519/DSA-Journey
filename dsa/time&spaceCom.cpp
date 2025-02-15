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
      return max;
}

int main()
{
      int arr[] = {10, 20, 30, 40, 50};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << size;
      return 0;
}