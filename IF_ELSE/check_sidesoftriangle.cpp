#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "s1 --> ";
    cin >> s1;
    cout << "s2 --> ";
    cin >> s2;
    cout << "s3 --> ";
    cin >> s3;

    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2))
    {
        cout << "These are the sides of triangle";
    }
    else
    {
        cout << "not the sides of triangle";
    }
    return 0;
}