
/*

C. Simple Calculator
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.*/
#include <iostream>
#include <stdio.h>
using namespace std;

void numberCalculation(int x, int y)
{
      int sum = x + y;
      int mul = x * y;
      int sub = x - y;
      cout << "Sum: " << sum << endl;
      cout << "Multiplication: " << mul << endl;
      cout << "Subtraction: " << sub << endl;
}

int main()
{
      int x, y;
      cout << "Enter two numbers: ";
      cin >> x >> y;
      numberCalculation(x, y);
      return 0;
}