#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
class DLL
{
private:
    Node *head;
    Node *tail;
    int len;

public:
    DLL()
    {
        tail = head = NULL;
        len = 0;
    }

    void reverse()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void remove_At_Tail()
    {
        if (head == NULL)
        {
            cout << "Link list is empty";
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        len--;
    }

    void remove(int idx)
    {
        if (idx < 0 || idx >= len)
        {
            cout << "Index out of bound" << endl;
            return;
        }
        if (idx == 0)
        {
            remove_At_head();
            return;
        }
        if (idx == (len - 1))
        {
            remove_At_Tail();
            return;
        }
        Node *ptr = head;
        Node *dummy = head;
        while (idx != 0)
        {
            ptr = dummy;
            dummy = dummy->next;
            idx--;
        }
        Node *temp = dummy->next;
        ptr->next = temp;
        temp->prev = ptr;
        len--;
    }

    void insert(int value, int idx)
    {
        if (idx < 0 || idx >= len)
        {
            cout << "Index out of bound" << endl;
            return;
        }

        Node *nh = new Node(value);
        if (idx == 0 || idx == (len - 1)) // it includes that if len is "0" or if we want to insert at 0 index only
        {
            Insert_At_Head(value);
            return;
        }
        else if (idx == (len))
        {
            Insert_At_Tail(value);
            return;
        }
        else
        {
            Node *d_head = head;
            Node *ptr = head;
            while (idx != 0)
            {
                ptr = d_head;
                d_head = d_head->next;
                idx--;
            }

            ptr->next = nh;
            nh->prev = ptr;
            nh->next = d_head;
            d_head->prev = nh;
        }
        len++;
    }

    void remove_At_head()
    {
        if (head == NULL)
        {
            cout << "Link list is empty";
            return;
        }
        head = head->next;
        head->prev = NULL;
        len--;
    }

    void Insert_At_Tail(int val)
    {
        Node *nh = new Node(val);
        if (len == 0)
        {
            head = tail = nh;
        }
        else
        {
            nh->prev = tail;
            tail->next = nh;
            tail = nh;
        }
        len++;
    }

    void Insert_At_Head(int val)
    {
        Node *nh = new Node(val);
        if (len == 0)
        {
            head = tail = nh;
        }
        else
        {
            head->prev = nh;
            nh->next = head;
            head = nh;
        }
        len++;
    }
    int size()
    {
        return len;
    }
};

int main()
{
    DLL list;
    list.Insert_At_Head(10);
    list.Insert_At_Head(20);
    list.Insert_At_Head(30);
    list.Insert_At_Head(40);
    list.print();
    cout << endl;
    cout << list.size() << endl;

    list.remove_At_head();
    list.print();
    cout << endl;
    cout << list.size() << endl;

    list.Insert_At_Tail(20);
    list.Insert_At_Tail(30);
    list.Insert_At_Tail(40);
    list.print();
    cout << endl;
    cout << list.size() << endl;

    list.remove_At_Tail();
    list.remove_At_Tail();
    list.print();
    cout << endl;

    list.insert(78, 2);
    list.print();
    cout << endl;

    list.remove(3);
    list.print();
    cout << endl;
    cout << list.size() << endl;
}