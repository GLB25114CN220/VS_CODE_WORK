#include <iostream>
using namespace std;
int x = 23;

int main()
{
    int x = 34;
    cout << x << endl;
    cout<<::x<<endl;    // "::" helps in  accessing the global variable 

    //  If in the case of repetitive declaration of same variable as global and locally and if the global var is to be use as inside the declaration of local variable then nested scope operator is used e.i.--> "::"

    return 0;
}