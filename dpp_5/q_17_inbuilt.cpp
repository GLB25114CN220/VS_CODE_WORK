#include<iostream>
using namespace std;
int findmax(int a , int b , int c)
{
    return max(max(a , b) , c);
}
int main()
{
    int n1 , n2 , n3;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;
    cout<<"Enter number 3 : ";
    cin>>n3;

    int result = findmax(n1 ,n2 ,n3);
    cout<<"The max number out of three is : "<<result;
    return 0;
}