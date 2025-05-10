#include <iostream>
using namespace std;
class Student
{

public:
      int age;
      int roll;
      Student(int a, int r)
      {
            this->age = a;
            this->roll = r;
      }
};

Student fun()
{
      Student s(20, 101);
      return s;
}

int main()
{
      Student s1 = fun();
      cout << "Student 1: Age: " << s1.age << ", Roll: " << s1.roll << endl;
      return 0;
}