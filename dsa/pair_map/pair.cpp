#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{

      pair<int, int> pr;
      pr = make_pair(1, 2);
      cout << pr.first << " " << pr.second << endl;

      // nested pair
      pair<string, pair<int, int>> nested_pr;
      nested_pr = make_pair("Juboraj", make_pair(1, 2));
      return 0;
}