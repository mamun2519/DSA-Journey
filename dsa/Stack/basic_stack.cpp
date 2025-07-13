#include <bits/stdc++.h>
using namespace std;
// g++ insert_array.cpp -o test.exe && ./test.exe < input.txt > output.txt

int main()
{
      // define stack
      stack<int> st;

      // push the stack
      st.push(10);
      st.push(20);

      // find top element
      cout << "Top element" << st.top() << endl;

      // remove element
      st.pop();
      cout << "Top After pop" << st.top() << endl;

      // check the size
      cout << "Stack Size Now" << st.size() << endl;

      // check the stack empty
      if (!st.empty())
      {
            cout << "Stack is does not empty";
      }
      return 0;
}