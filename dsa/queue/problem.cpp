#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            int min_cost = 0;
            for (int i = 0; i < n; i++)
            {
                  for (int j = i + 1; j < n; j++)
                  {
                        if (i == j)
                              continue;

                        int cost;
                        if (i + 1 == j)
                        {
                              cost = arr[i] + arr[j] / 2;
                        }
                        else
                        {
                              cost = arr[i] + arr[j];
                        }
                        min_cost = min(min_cost, cost);
                  }
            }
      }
      return 0;
}