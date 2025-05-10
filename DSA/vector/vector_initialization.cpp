#include <bits/stdc++.h>
using namespace std;

int main()
{

      // declare vector
      vector<int> className;
      vector<int> phones(5);

      vector<int> address(3, 500);
      vector<int> numbers = {2, 5, 7};

      // iterate vector

      for (int i = 0; i < numbers.size(); i++)
      {
            cout << numbers[i] << endl;
      }

      //* size
      cout << "Number vector size is" << numbers.size();
      return 0;
}