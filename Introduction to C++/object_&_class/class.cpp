#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
      char name[200];
      int roll;
      double cgpa;
};
int main()
{
      Student a;
      a.roll = 30;
      a.cgpa = 3.80;
      char tem[100] = "Mamun";
      strcpy(a.name, tem);
      cout << a.roll << " " << a.cgpa << " " << a.name << endl;
      return 0;
}