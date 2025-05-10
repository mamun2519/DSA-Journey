#include <iostream>
using namespace std;

namespace Mamun
{
      int a = 10;
      int b = 20;
      void display()
      {
            cout << "Hello Mamun" << endl;
      }
}
using namespace Mamun;
int main()
{
      cout << a << endl;
      cout << b << endl;
      display();
      return 0;
}