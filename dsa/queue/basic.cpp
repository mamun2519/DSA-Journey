#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{

      // declare q;
      queue<int> q;
      // push add to last element
      q.push(10); // 10
      q.push(20); // 10 20
      q.push(30); // 10 20 30

      // print the font element
      cout << q.front() << endl;

      return 0;
}