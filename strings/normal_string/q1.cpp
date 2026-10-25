#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<string> arr = {"0123", "0023", "456", "00182", "940", "2901"};
    // vector<int> v;
    
    // for (int i = 0; i < arr.size(); i++)
    // {
        //     int s = stoi(arr[i]);
        //     v.push_back(s);
        // }
        // sort(v.begin() , v.end());
        // cout<<arr[arr.size() - 1]<<endl;
        // return 0;
        


        
    vector<string> arr = {"0123", "0023", "456", "00182", "940", "2901"};
    string max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (stoi(max) < stoi(arr[i]))
        {
            max = arr[i];
        }
    }
    cout << stoi(max) << endl;
    return 0;
}