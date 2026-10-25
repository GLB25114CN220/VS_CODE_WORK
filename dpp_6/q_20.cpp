// --> Time com = O(n);
// -->Which is not suitable

#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &arr, int a, int b)
{
    int n = arr.size();
    for (int i = a, j = b; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int n, x, y;
    cout << "Enter the size of vector : ";
    cin >> n;
    cout << "Right shift : ";
    cin >> x;
    cout << "Left shift : ";
    cin >> y;

    vector<int> v(n);
    cout << "Enter the elements in  vector :--";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //  For right rotation of an array :--

    change(v, 0, n - 1);
    change(v, 0, x - 1);
    change(v, x, n - 1);

    // Now for left shifting :--

    change(v , 0 , n-1);
    change(v , 0 , n - y - 1);
    change(v , n-y , n-1);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}