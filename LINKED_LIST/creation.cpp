#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
int main()
{
    node a(7); // head
    node b(0);
    node c(1);
    node d(9);
    node e(8);

    // now attaching the nodes:--

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    display(a);
}