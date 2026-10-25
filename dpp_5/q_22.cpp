#include <bits/stdc++.h>
using namespace std;
void sumFirstAndLast(int num)
{
    int ld;
    int count = 0;
    int sum = 0;
    int n1 = num;

    int c = 0;
    while (n1 != 0)
    {
        c++;
        n1 /= 10;
    }

    while (num != 0)
    {
        count++;
        ld = num % 10;
        num /= 10;
        if (count == 1 || count == c)
        {
            sum += ld;
        }
    }
    cout << "The sum of first and last element is : " << sum;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    sumFirstAndLast(n);
    return 0;
}