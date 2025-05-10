#include <iostream>
using namespace std;

class Student
{
public:
      int age;
      int roll;
      double gpa;

      // Default constructor
      Student(int a, int r, double g)
      {
            this->age = a;
            this->roll = r;
            this->gpa = g;
      }
};

int main()
{
      // Creating an object of Student class
      Student s1(20, 101, 3.5);
      Student s2(22, 102, 3.8);

      // Accessing the members of the object
      cout << "Student 1: Age: " << s1.age << ", Roll: " << s1.roll << ", GPA: " << s1.gpa << endl;
      cout << "Student 2: Age: " << s2.age << ", Roll: " << s2.roll << ", GPA: " << s2.gpa << endl;

      return 0;
}