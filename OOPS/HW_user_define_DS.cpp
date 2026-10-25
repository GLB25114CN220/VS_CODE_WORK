#include <bits/stdc++.h>
using namespace std;
class Myvector
{
private:
    int length;
    int *arr;
    int cap;

public:
    Myvector(int capacity, int default_v)
    {
        cap = length = capacity;
        arr = new int[capacity];
        for (int i = 0; i < length; i++)
        {
            arr[i] = default_v;
        }
    }
    int size()
    {
        return length;
    }
    int capacity()
    {
        return cap;
    }
    int get(int idx)
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Invalid index to return !" << endl;
            return -1;
        }
        return arr[idx];
    }
    void insert(int idx, int value)
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Invalid index to insert the value !" << endl;
            return;
        }
        arr[idx] = value;
    }
    void pop_back()
    {
        if (length == 0)
        {
            cout << "vector is Empty!" << endl;
        }
        length--;
    }
    void push_back(int v)
    {
        if (length == cap)
        {
            cap = 2 * cap;
            int *temp = new int[cap];
            for (int i = 0; i < length; i++)
            {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length++] = v;
    }
    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Myvector v(5, -1);
    v.print();
    cout << endl;
    cout << v.size() << " " << v.capacity() << " ";
    cout << endl;
    v.pop_back();
    v.print();
    cout << endl;
    cout << v.size() << " " << v.capacity() << " ";
    cout << endl;
    v.push_back(24);
    v.print();
    cout << endl;
    v.insert(2, 120);
    v.print();
    cout << endl;
    cout << v.get(2) << endl;
}