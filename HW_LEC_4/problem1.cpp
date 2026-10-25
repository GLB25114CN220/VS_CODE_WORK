#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter length of rectangle : ";
    cin >> length;

    int breadth;
    cout << "Enter breadth of rectangle : ";
    cin >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if (area < perimeter)
    {
        cout << "area is smaller than perimeter.";
    }
    else
    {
        cout << "area is greater than its perimeter.";
    }
    return 0;
}