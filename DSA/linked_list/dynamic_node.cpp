#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int value;
      Node *next;

      Node(int value)
      {
            this->value = value;
            this->next = NULL;
      }
};

int main()
{
      Node *Head = new Node(10);
      Node *a = new Node(5);
      Node *b = new Node(4);

      Head->next = a;
      a->next = b;

      cout << Head->value << " " << Head->next->value;
      //* dynamic node;
      return 0;
}