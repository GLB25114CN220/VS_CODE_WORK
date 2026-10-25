#include <iostream>
using namespace std;
void swap_num(int *a, int *b)
{
    cout << "n1--> " << *b<<endl;
    cout << "n2--> " << *a;
}
int main()
{
    cout << "Before swap :--" << endl
         << endl;
    int n1, n2;
    cout << "n1--> ";
    cin >> n1;
    cout << "n2--> ";
    cin >> n2;

    cout << "After Swap :--" << endl
         << endl;
    swap_num(&n1, &n2);
    return 0;
}