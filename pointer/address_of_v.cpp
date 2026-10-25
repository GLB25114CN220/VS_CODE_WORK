#include<iostream>
using namespace std;
int main()
{
    int x = 2;
    int* ptr = &x;
    int** ptr2 = &ptr;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

    return 0;
}