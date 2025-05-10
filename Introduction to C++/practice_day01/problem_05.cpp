#include <iostream>
#include <stdio.h>
using namespace std;

int *get_array(int n)
{
      int *arr = new int[n];
      for (int i = 0; i < n; i++)
      {
            cout << "Enter the element " << i + 1 << ": ";
            cin >> arr[i];
      }
      return arr;
}

int main()
{
      int n;
      cout << "Enter the size of the array: ";
      cin >> n;

      int *arr = get_array(n);

      cout << "The elements of the array are: ";
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      delete[] arr; // Free the allocated memory
      return 0;
}