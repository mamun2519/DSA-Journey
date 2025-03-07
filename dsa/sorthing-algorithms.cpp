#include <iostream>
using namespace std;

/* void bubbleSort(int arr[], int size)
{
      for (int i = 0; i < size - 1; i++)
      {
            for (int j = 0; j < size - i - 1; j++)
            {

                  if (arr[j] > arr[j + 1])
                  {
                        swap(arr[j], arr[j + 1]);
                  }
            }
      }
} */

/* void selectionSort(int arr[], int size)
{
      for (int i = 0; i < size - 1; i++)
      {
            int smallIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                  if (arr[j] < arr[smallIndex])
                  {
                        smallIndex = j;
                  }
            }
            swap(arr[i], arr[smallIndex]);
      }
}
 */

void bubbleSort(int arr[], int size)
{
      for (int i = 0; i < size - 1; i++)
      {
            for (int j = 0; j < size - i - 1; j++)
            {
                  if (arr[j] > arr[j + 1])
                  {
                        swap(arr[j], arr[j + 1]);
                  }
            }
      }
}

void selectionSort(int arr[], int size)
{
      for (int i = 0; i < size - 1; i++)
      {
            int smallIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                  if (arr[j] < arr[smallIndex])
                  {
                        smallIndex = j;
                  }
            }
            swap(arr[i], arr[smallIndex]);
      }
}
void printArray(int arr[], int size)
{
      for (int i = 0; i < size; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
}
int main()
{
      int size = 5;
      int arr[] = {4, 1, 5, 2, 3};
      bubbleSort(arr, size);
      // selectionSort(arr, size);
      printArray(arr, size);
      return 0;
}