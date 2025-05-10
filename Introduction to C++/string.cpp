#include <bits/stdc++.h>
using namespace std;
int main()
{
      // define string
      string name = "Rohim";
      string name2 = "Korim";
      cout << "Name: " << name << endl;

      // string capacity
      cout << name.size() << endl;
      // max size
      cout << name.max_size() << endl;

      // capacity
      cout << name.capacity() << endl;

      // element access
      cout << name[4] << endl;
      cout << name.back() << endl;
      cout << name.front() << endl;

      // modify string
      name = name + name2;
      cout << name << endl;
      name.push_back('A');
      cout << name << endl;

      // iterate string
      for (int i = 0; i < name.size(); i++)
      {
            cout << name[i] << endl;
      }

      // pointer

      cout << *name.begin() << endl;
      cout << *(name.end() - 1) << endl;
      return 0;
}