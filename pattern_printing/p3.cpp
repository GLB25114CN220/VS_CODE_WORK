#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int st = 64, num;
    char alpha;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            num = st + j;
            alpha = (char)num;
            cout << alpha;
        }
        cout << endl;
    }
    return 0;
}