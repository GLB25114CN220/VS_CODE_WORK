#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    string s = to_string(abs(n));
    // string s = to_string(n);
    int count = s.size();
    // if(n<0)
    // {
    //     count -= 1; 
    // }
    cout << "the total number of digits in number are : " << count << endl;
    return 0;
}