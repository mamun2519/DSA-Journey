#include <bits/stdc++.h>
using namespace std;

int main()
{
      string name;
      int age;
      cin >> name >> age;
      pair<string, int> person;
      person = make_pair(name, age);
      cout << "Age of " << person.first << ":  " << person.second << endl;
      return 0;
}