#include <iostream>
#include <climits>
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
      int firstElement = INT_MIN;
      int secondElement = INT_MIN;
      for (int i = 0; i < size; i++)
      {
            if (arr[i] > firstElement)
            {
                  secondElement = firstElement;
                  firstElement = arr[i];
            }
            else if (arr[i] > secondElement && arr[i] != firstElement)
            {
                  secondElement = arr[i];
            }
      }

      return secondElement;
}

int findMissingNumber(int arr[], int size)
{
      int total = (size + 1) * (size + 2) / 2; // Sum of first (n+1) natural numbers
      cout << total;
      for (int i = 0; i < size; i++)
      {
            total -= arr[i];
      }
      return total;
}

int findDuplicate(int arr[], int size)
{
      for (int i = 0; i < size; i++)
      {
            for (int j = i + 1; j < size; j++)
            {
                  if (arr[i] == arr[j])
                  {
                        return arr[i];
                  }
            }
      }
      return -1; // No duplicate found
}

int main()
{
      int arr[] = {10, 20, 40, 50, 300, 800, 500};
      int arr2[] = {1, 2, 4, 5, 6, 2, 1};
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
      cout << "Secend Largest Element is " << findSecondLargest(arr, size) << endl;
      cout << "Missing number: " << findMissingNumber(arr2, size) << endl;
      cout << "Duplicate number: " << findDuplicate(arr2, size) << endl;
      return 0;
}