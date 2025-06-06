/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number. */

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
      int a, b, c;
      cin >> a >> b >> c;
      int min_number = min({a, b, c});
      int max_number = max({a, b, c});
      cout << min_number << " " << max_number << endl;
}