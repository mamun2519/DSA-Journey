

/*

Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.*/

#include <iostream>
#include <stdio.h>
#include <iomanip>   // for std::setprecision
#include <algorithm> // for std::swap
using namespace std;
int main()
{

      int a[5] = {3, 5, 10, 3, 4};
      int max_number = max({a[0], a[1], a[2], a[3], a[4]});
      cout << "The maximum number is: " << max_number << endl;
}