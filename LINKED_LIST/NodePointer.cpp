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

// void print(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->value << endl;
//         temp = temp->next;
//     }
// }

void print_rec(node *head)
{
    if(head == NULL) return;
    cout << head->value << " ";
    print_rec(head->next);
}

int main()
{
    // Node Pointers :--

    node *a = new node(7);
    node *b = new node(0);
    node *c = new node(9);
    node *d = new node(6);
    node *e = new node(3);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_rec(a);

    // cout << a->value << endl;
    // cout << a->next->value << endl;
    // cout << a->next->next->value << endl;
    // cout << a->next->next->next->value << endl;
    // cout << a->next->next->next->next->value << endl;
}