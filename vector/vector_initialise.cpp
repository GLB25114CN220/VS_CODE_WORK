#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    cout<<"The third element of an array is : "<<v[2];
    cout<<endl;
    cout<<"The capacity of vector is : "<< v.capacity();
    return 0;
}