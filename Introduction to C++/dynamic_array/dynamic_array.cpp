#include <iostream>
using namespace std;

int main()
{
      // static array
      // int a[5];

      // dynamic array
      int n;
      cin >> n;
      int *a = new int[n]; // dynamic array
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      // print array
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << " ";
      }
      cout << endl;
      // delete array

      return 0;
}
