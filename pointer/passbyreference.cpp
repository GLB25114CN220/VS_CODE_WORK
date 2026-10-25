#include<iostream>
using namespace std;
void change(int* p)
{
    *p = 45;
}
int main()
{
    int n = 23;
    change(&n);
    cout<<n<<endl;
    return 0; 
}