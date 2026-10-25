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
class MyLinkedList
{
private:
    node *head;
    node *tail;
    int length;

public:
    MyLinkedList()
    {
        length = 0;
    }
    void insertAtTail(int val)
    {
        node *t = new node(val);
        if (length == 0)
        {
            head = tail = t;
        }
        else
        {
            tail->next = t;
            tail = t;
        }
        length++;
    }
    void insertAtHead(int val)
    {
        node *t = new node(val);
        if (length == 0)
        {
            head = tail = t;
        }
        else
        {
            t->next = head;
            head = t;
        }
        length++;
    }
    void deleteAtHead()
    {
        if (length == 0)
        {
            cout << "Linked List is Empty!" << endl;
            return;
        }
        else
        {
            head = head->next;
        }
        length--;
    }
    int size()
    {
        return length;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    MyLinkedList list;
    list.insertAtTail(23);
    list.insertAtTail(45);
    list.insertAtHead(14);
    list.insertAtHead(90);

    list.deleteAtHead();

    cout << list.size() << endl;
    list.display();
}