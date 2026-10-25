#include <iostream>
using namespace std;
float calculate_area_circle(float r)
{
    return 3.14 * r * r;
}
float calculate_area_rectangle(float l, float b)
{
    return l * b;
}

int main()
{
    float r, l, b;
    cout << "Enter the radius of circle : ";
    cin >> r;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter breadth : ";
    cin >> b;

    cout << "The area of circle is : " << calculate_area_circle(r);
    cout << endl;
    cout << endl;
    cout << "The area of rectangle is : " << calculate_area_rectangle(l, b);
    return 0;
}