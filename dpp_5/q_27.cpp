#include <iostream>
using namespace std;
changeTarget(int **ptr, int *newAddress)
{
    **ptr = *newAddress;
    cout << **ptr;  //here the variable passed in p now points towards b;
}
int main()
{
    int a, b;
    cout << "a--> ";
    cin >> a;
    cout << "b--> ";
    cin >> b;

    int *p = &a;

    changeTarget(&p, &b);
}