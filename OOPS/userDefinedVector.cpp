#include <bits/stdc++.h>
using namespace std;
class MyVector
{
private:
    int length;
    int *arr;
    int cap;

public:
    MyVector(int capacity, int default_value)
    {
        length = cap = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = default_value;
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
    void push_back(int value)
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
        arr[length] = value;
        length++;
    }
    int get(int idx)
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Index Out of bound!" << endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx, int new_v)
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Index Out of bound!" << endl;
            return;
        }
        arr[idx] = new_v;
    }
    void pop_back()
    {
        if (length == 0)
        {
            cout << "Vector is Empty!" << endl;
        }
        length--;
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
    MyVector v(5, -1);

    v.print();
    v.pop_back();
    cout << endl;
    v.print();
    cout << endl;
    v.push_back(10);
    v.print();
    cout << endl;
    v.push_back(20);
    v.print();
    cout << endl;
    cout << v.get(5) << endl;
    v.set(2, 130);
    v.print();
}