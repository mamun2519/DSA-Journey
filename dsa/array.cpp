#include <iostream>
using namespace std;

// int main()
// {
//       int numbers[] = {1, 3, 3, 5, 6, 7};
//       int size = 6;
//       for (int i = 0; i < size; i++)
//       {
//             cout << numbers[i] << endl;
//       }

//       return 0;
// }

//& Find the largest Element in array
/*
int main()
{
      int numbers[] = {2, 9, 6, 8, 2, 0};
      int size = 6;
      int maxNumber = 0;
      for (int i = 0; i < size; i++)
      {
            if (numbers[i] > maxNumber)
            {
                  maxNumber = numbers[i];
            }
      }
      cout << maxNumber << endl;
      return 0;
}
*/

//& Find the smaller Element in array
/*
int main()
{
      int numbers[] = {2, 9, 6, 8, 2, 0, -5};
      int size = 7;
      int smallNumber;
      for (int i = 0; i < size; i++)
      {
            if (numbers[i] < smallNumber)
            {
                  smallNumber = numbers[i];
            }
      }
      cout << smallNumber << endl;
      return 0;
}
*/

//&1. Pass by Reference
/*
void swap(int &a, int &b)
{
      int temp = a;
      a = b;
      b = temp;
}

void swapInArray(int (&array)[5])
{
      for (int i = 0; i < 5; i++)
      {
            array[i] = array[i] * 2;
      }
}

int main()
{
      int x = 50, y = 90;
      cout << "Before swap: x = " << x << ", y = " << y << endl;
      swap(x, y);
      cout << "After swap: x = " << x << ", y = " << y << endl;

      int arr[5] = {1, 2, 3, 4, 5};
      // cout << arr << endl;
      swapInArray(arr);
      cout << "Modified array: ";
      for (int i = 0; i < 5; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}
*/

//* 2. Pass by Address (Using Pointers)
/*
void swap(int *a, int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
}

int main()
{
      int x = 10, y = 20;
      cout << "Before swap: x = " << x << ", y = " << y << endl;

      swap(&x, &y); // Pass addresses of x and y

      cout << "After swap: x = " << x << ", y = " << y << endl;
      return 0;
}

*/
// Liner Search In Array

int linerSearch(int array[5], int target)
{

      for (int i = 0; i < 5; i++)
      {
            if (array[i] == target)
            {
                  return i;
            }
      }
      return -1;
}

int main()
{
      int numbers[5] = {40, 50, 22, 15, 70};
      int result = linerSearch(numbers, 22);
      cout << result << "This is Linear search result";
      return 0;
}