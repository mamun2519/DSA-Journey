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

void insertionSort(int arr[], int size)
{
      for (int i = 1; i < size; i++)
      {
            int curr = arr[i];
            int prev = i - 1;
            while (prev >= 0 && arr[j] > curr)
            {
                  arr[j + 1] = arr[prev];
                  prev--;
            }
            arr[prev + 1] = curr;
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
      // bubbleSort(arr, size);
      // selectionSort(arr, size);
      insertionSort(arr, size);
      printArray(arr, size);
      return 0;
}