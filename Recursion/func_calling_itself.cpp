#include<bits/stdc++.h>
using namespace std;
void yash(int n)
{
    if(n==0) return;
    yash(n-1);
    cout<<"yash"<<endl;
}
int main()
{
    yash(3);
}