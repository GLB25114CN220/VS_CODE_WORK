#include <bits/stdc++.h>
using namespace std;
class student
{ // user defined data type
public:
    string name;
    int r_no;
    float cgpa;
    // constructor overloading :--
    student(string n, int r, float c) // parametrized constructor
    {
        name = n;
        r_no = r;
        cgpa = c;
    }
    student(int r, string n, float c)
    {
        name = n;
        cgpa = c;
        r_no = r;
    }
    student(string n, int r)
    {
        name = n;
        r_no = r;
    }
    student()
    { // default constructor
    }
};
int main()
{
    student x("yash", 45, 8.9);
    cout << x.name << " " << x.r_no << " " << x.cgpa << endl;

    student y(65, "Aditi", 7.78);
    cout << y.name << " " << y.r_no << " " << y.cgpa << endl;

    student z("chintu", 34);

    student a;
    return 0;
}