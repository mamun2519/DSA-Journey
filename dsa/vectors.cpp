#include <vector>
#include <iostream>
using namespace std;

int main()
{

      vector<int> numbers = {1, 3, 5, 7, 8};
      // Adding element
      numbers.push_back(20);
      numbers.emplace_back(30);

      //* accessing
      cout
          << "Adding Element Is" << numbers[6] << endl;
      cout << "Access element is" << numbers.at(2) << "First element is" << numbers.front() << "Last element is" << numbers.back() << endl;

      return 0;
}