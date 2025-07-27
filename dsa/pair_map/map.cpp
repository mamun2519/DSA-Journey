
#include <bits/stdc++.h>
using namespace std;

int main()
{
      // declare a map
      // map<key_type, value_type> map_name;
      map<string, int> age;

      // insert elements into the map
      age["juboraj"] = 24;
      age["john"] = 30;
      age["alice"] = 22;

      cout << "Age of Juboraj: " << age["juboraj"] << endl;
      return 0;
}