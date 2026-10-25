#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int v1 = 1;

    int sp;
    int nsp = n - 1;
    int num = 1;
    int st1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            st1 = i;
            for (int j = 1; j <= nsp; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= num; k++)
            {
                cout << st1 << " ";
                st1++;
            }
            int st2 = 2 * i - 2;
            for (int l = 2; l <= num; l++)
            {
                cout << st2 << " ";
                st2--;
            }
            num++;
            nsp--;
            sp = nsp;
        }

        else
        {
            for(int j=1;j<=v1;j++)
            {
                cout<<"  ";
            }
            for(int )
            v1++;
        }
        cout << endl;
    }
    return 0;
}