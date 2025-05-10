#include <iostream>
using namespace std;
#include <iomanip> // for std::setprecision

int main()
{
      double pi = 3.14159265358979323846;
      cout << "Default precision: " << pi << endl;
      cout << setprecision(5) << "Set precision to 5: " << pi << endl;
}