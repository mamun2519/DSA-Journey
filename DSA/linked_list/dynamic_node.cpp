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

      Head->next = a;

      cout << Head->value << " " << Head->next->value;
      return 0;
}