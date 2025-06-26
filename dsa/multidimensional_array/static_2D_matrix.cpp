#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{ // two row => 3 column
      int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

      // travarse array

      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  cout << matrix[i] << " ";
            }
      }

      return 0;
}