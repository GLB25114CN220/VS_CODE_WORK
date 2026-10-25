#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {91,25,33,467,34};
    sort(v.begin()+1, v.end());
    for(int elem : v)
    {
        cout<<elem<<" ";
    }
    
    cout<<endl<<endl;
    reverse(v.begin()+1 , v.end());
    for(int elem : v)
    {
        cout<<elem<<" ";
    }

    return 0;
}