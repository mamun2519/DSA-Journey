#include <iostream>
using namespace std;

// **Squire Pattern **

// ⇒ Easy With Numbers n = 4

//     OutPut :

//     1234

//     1234

//     1234

//     1234

int main()
{
      int n = 4;
      for (int i = 1; i < n; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  cout << j;
            }
            cout << endl;
      }
      return 0;
}
