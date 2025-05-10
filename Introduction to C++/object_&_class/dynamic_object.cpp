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

int main()
{
      Student Rohim(20, 101);
      Student *korim = new Student(20, 101);
      Student *korim2 = new Student(20, 101);
      // dynamic copy
      *korim2 = *korim;

      cout << "Rohim: Age: " << Rohim.age << ", Roll: " << Rohim.roll << endl;

      // Accessing the members of the object using pointer
      cout << "Korim: Age: " << korim->age << ", Roll: " << korim->roll << endl;
      return 0;
}