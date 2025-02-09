#include <vector>
#include <iostream>
using namespace std;

int main()
{

      vector<int> numbers = {1, 3, 5, 7, 8};
      // Adding element
      numbers.push_back(20);
      numbers.emplace_back(30);
      cout
          << numbers[6];
      return 0;
}