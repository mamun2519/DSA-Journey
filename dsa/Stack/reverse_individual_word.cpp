#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
      stack<char> st;
      string result = "";

      for (int i = 0; i < str.length(); i++)
      {
            if (str[i] != ' ')
            {
                  st.push(str[i]);
            }
      }
}

int main()
{
      string str;
      cin >> str;
      string reversedString = reverseWords(str);
      cout << reversedString << endl;
      return 0;
}