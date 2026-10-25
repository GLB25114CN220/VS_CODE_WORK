#include <iostream>
using namespace std;
void sortTwo(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    // now after swapping printing according to the ascending order :-
    cout<<endl<<"After swapping:-- "<<endl;
    cout <<*ptr1<<" ";
    cout <<*ptr2;
}
int main()
{
    int a, b;
    cout << "a--> ";
    cin >> a;
    cout << "b--> ";
    cin >> b;

    // If a > b then the swap will takes place between the elements ... 
    sortTwo(&a, &b);
    return 0;
}