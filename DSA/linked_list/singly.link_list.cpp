#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
      int value;
      Node *next;

      Node(int val)
      {
            this->value = val;
            this->next = NULL;
      }
};
int main()
{
      Node a(20);
      Node b(30);

      a.next = &b;
      cout << a.value << a.next->value;
      return 0;
}