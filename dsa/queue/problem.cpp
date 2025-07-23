#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int target;
      cin >> target;

      stack<int> st;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] <= target)
                  st.push(i);
      }
      else if () return 0;
}