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

bool isSorted(int arr[], int size)
{
      for (int i = 1; i < size; i++)
      {

            if (arr[i] < arr[i - 1])
            {
                  return false;
            }
      }
      return true;
}

void reverseArray(int arr[], int size)
{
      int start = 0;
      int end = size - 1;
      for (int i = 0; i < size; i++)
      {
            if (start < end)
            {
                  swap(arr[start], arr[end]);
                  start++;
                  end--;
            }
      }
}

int findSecondLargest(int arr[], int size)
{
      int firstElement;
      int secondElement;
      for (int i = 0; i < size; i++)
      {
            if (arr[i] > firstElement)
            {
                  secondElement =
            }
      }
}

int main()
{
      int arr[] = {10, 20, 40, 50, 300, 800, 500};
      int size = sizeof(arr) / sizeof(arr[0]);
      cout
          << "Max element is " << findMax(arr, size) << endl;
      cout << "Is the array sorted ?" << (isSorted(arr, size) ? "Yes" : "No") << endl;

      //* Reverse real array
      reverseArray(arr, size);
      for (int i = 0; i < size; i++)
      {
            cout << arr[i] << endl;
      }
      return 0;
}