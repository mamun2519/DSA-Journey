#include <bits/stdc++.h>
using namespace std;

int main()
{

      // declare vector
      vector<int> numbers;

      // insert the last element
      numbers.push_back(5);
      numbers.push_back(10);
      numbers.push_back(50);

      //  max size
      cout << "Max size is" << numbers.max_size() << endl;

      //* resize
      // numbers.resize(2, 100);

      // iterate vector

      for (int i = 0; i < numbers.size(); i++)
      {
            cout << numbers[i] << endl;
      }

      //* size
      cout << "Number vector size is" << numbers.size();
      return 0;
}