#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  now doing sorting:-

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }

    int found;
    for(int i=0;i<n;i++)
    {
        if(i != arr[i])
        {
            found = i;
            break;
        }
    }

    cout<<"Missing element is : "<<found;
    return 0;
}