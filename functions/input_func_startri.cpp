#include<iostream>
using namespace std;
void star_t(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int a,b,c;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;
    cout<<"c--> ";
    cin>>c;
    star_t(a);
    star_t(b);
    star_t(c);

    return 0;
}