#include<iostream>
#include<cmath>
using namespace std;
float calculate_hyp(int p , int b)
{
    float h = sqrt(pow(b , 2) + pow(p , 2));
    return h;
}
int main()
{
    int p , b;
    cout<<"p--> ";
    cin>>p;
    cout<<"b--> ";
    cin>>b;

    cout<<"The hypotenuse of a right angled triangle is : "<<calculate_hyp(p , b);
    return 0;
}