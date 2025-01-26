#include <iostream>
using namespace std;

// **Squire Pattern **

// ⇒ Easy With Numbers n = 4

//     OutPut :

//     1234

//     1234

//     1234

//     1234

// int main()
// {
//       int n = 4;
//       for (int i = 1; i < n; i++)
//       {
//             for (int j = 1; j <= n; j++)
//             {
//                   cout << "*";
//             }
//             cout << endl;
//       }
//       return 0;
// }

// -----------------------------

//     OutPut :

//     ABCD

//     ABCD

//     ABCD

//     ABCD

int main()
{
      int n = 4;

      for (int i = 0; i < n; i++)
      {
            char ch = 'A';
            for (int j = 0; j < n; j++)
            {
                  cout << ch;
                  ch = ch + 1;
            }
            cout << endl;
      }
      return 0;
}