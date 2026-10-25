#include<iostream>
using namespace std;
void fun(int x)
{
    cout<<"INTEGER"<<endl;
}
void fun(char x)
{
    cout<<"A"<<endl;
}
void fun(double x)
{
    cout<<"HEHEHE"<<endl;
} 
int main()
{
    fun('a');
}