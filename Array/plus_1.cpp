#include <iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int> &arr)
{
    int n = arr.size();

    int ld = arr[2];
    int r = 0;
    int st = n;
    int a = n - 1;
    while (st != 0)
    {
        ld = arr[a];
        r = ld + (10 * r);
        a--;
        st--;
    }

    int ld1;
    int r1 = 0;
    while (r != 0)
    {
        ld1 = r % 10;
        r1 = ld1 + (10 * r1);
        r /= 10;
    }

    r1 = r1 + 1;

    // now putting the integer value according to array indexing :--

    int st2 = n;
    int b = st2 - 1;
    int ld2;
    while (r1 != 0)
    {
        ld2 = r1 % 10;
        arr[b] = ld2;
        b--;
        r1 /= 10;
    }
}