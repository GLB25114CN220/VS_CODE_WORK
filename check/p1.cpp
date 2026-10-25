#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        a = a * arr[i];
    }

    cout<<"The product of all the elements of an array is : "<<a;
    return 0;
}