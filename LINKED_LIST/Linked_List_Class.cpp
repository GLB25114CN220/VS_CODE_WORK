#include <bits/stdc++.h>
using namespace std;
class Node // User Defined Data Type
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
class MyLinkedList // user defined data structure
{
private: // this is called (encapsulation) due to security reason
    Node *head;
    Node *tail;
    int length;

public:
    MyLinkedList()
    {
        tail = head = NULL;
        length = 0;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtHead(int value)
    {
        Node *t = new Node(value);
        if (length == 0)
        {
            tail = head = t;
        }
        else
        {
            t->next = head;
            head = t;
        }
        length++;
    }

    void insertAtTail(int value)
    {
        Node *t = new Node(value);
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

    void insert(int idx, int val)
    {
        if (idx < 0 or idx > length)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        if (idx == 0)
        {
            insertAtHead(val);
            return;
        }
        if (idx == length)
        {
            insertAtTail(val);
            return;
        }
        Node *t = new Node(val);
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;

        length++;
    }

    int get(int idx)
    {
        if (idx < 0 or idx >= length)
        {
            cout << "Invalid index!" << endl;
            return -1;
        }
        Node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        return (temp->value);
    }

    void removeAtHead()
    {
        if (length == 0)
        {
            cout << "List is Empty!";
            return;
        }
        Node *toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
    }

    void remove(int idx)
    {
        if (idx < 0 or idx >= length)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        if (idx == 0)
        {
            removeAtHead();
            return;
        }
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        Node *toBeDeleted = temp->next;
        temp->next = temp->next->next;
        if (idx == length - 1)
        {
            tail = temp;
        }
        delete toBeDeleted;
        length--;
    }

    void set(int idx, int val)
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Invalid Index!" << endl;
            return;
        }
        Node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        temp->value = val;
    }

    int t()
    {
        return (tail->value);
    }
    int size()
    {
        return length;
    }
};
int main()
{
    MyLinkedList list;
    list.insertAtTail(12);
    list.insertAtTail(30);
    list.insertAtHead(20);
    list.insertAtHead(34);

    list.removeAtHead();
    cout << list.size() << endl;
    list.display();

    cout << endl;
    list.insert(2, 455);
    list.display();
    cout << list.size() << endl;

    cout << list.get(2) << endl;
    list.remove(3);
    list.display();
    cout << endl;
    cout << list.t() << endl;

    list.set(1,100);
    list.display();
}