#include <iostream>
using namespace std;

int main()
{
      int x = 10;
      int *ptr = &x;
      int y = 20;
      ptr = &y;
      cout << "Memory Address Is" << *ptr;

      return 0;
}