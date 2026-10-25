#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "COST PRICE : ";
    cin >> cp;

    int sp;
    cout << "SELLING PRICE : ";
    cin >> sp;

    cout<<endl;
    if (cp < sp)
    {
        cout << "PROFIT" << endl;
        cout << "The profit is : " << (sp - cp) << endl;
    }
    else if (sp < cp)
    {
        cout << "LOSS" << endl;
        cout << "The loss is : " << (cp - sp) << endl;
    }
    else
    {
        cout << "NO PROFIT AND NO LOSS";
    }
    return 0;
}