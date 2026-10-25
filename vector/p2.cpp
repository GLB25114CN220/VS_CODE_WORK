#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(20);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(23);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(21);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(24);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(69);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(27);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(68);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(55);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(555);
    cout << v.size() << " " << v.capacity() << endl;
    return 0;
}