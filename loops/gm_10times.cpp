#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;
    
    for (int i = a; i <= b; ++i) // loop always works till (b-a+1)
    {
        cout << "good morning" << endl;
    }
    return 0;
}