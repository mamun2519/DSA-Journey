#include <bits/stdc++.h>
using namespace std;

int main()
{
      string word;
      cin >> word;
      stack<char> st;
      string result;
      for (int i = 0; i < word.length(); i++)
      {

            if (word[i] != ' ')
            {
                  st.push(word[i]);
            }
      }

      return 0;
}