#include <bits/stdc++.h>
using namespace std;
class complex_no
{
public:
    float real;
    float imaginary;
    complex_no(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void add(complex_no &n2)
    {
        real = real + n2.real;
        imaginary = imaginary + n2.imaginary;
    }
    void sub(complex_no &n2)
    {
        real = real - n2.real;
        imaginary = imaginary - n2.imaginary;
    }
    void mul(complex_no &n2)
    {
        int r = real;
        real = (real * n2.real) + ((-1) * (imaginary * n2.imaginary));
        imaginary = (r * n2.imaginary) + (imaginary * n2.real);
    }
    void div(complex_no &n2)
    {
        int st = real;
        real = (((real * n2.real) + ((imaginary * n2.imaginary))) / ((n2.real * n2.real) + (n2.imaginary * n2.imaginary)));
        imaginary = (((st * (-1) * n2.imaginary) + (imaginary * n2.real)) / ((n2.real * n2.real) + (n2.imaginary * n2.imaginary)));
    }
    void print()
    {
        if (imaginary < 0)
        {
            cout << real << "-" << (-1) * imaginary << "i" << endl;
        }
        else
        {
            cout << real << "+" << imaginary << "i" << endl;
        }
    }
};
int main()
{
    complex_no n1(2, 2);
    complex_no n2(2, 4);

    // cout << "Addition :--\n";
    // n1.print();
    // n1.add(n2);
    // n2.print();
    // n1.print();

    // cout << "\nSubtraction :--\n";

    // n1.print();
    // n1.sub(n2);
    // n2.print();
    // n1.print();

    cout << "\nDivision :--\n";

    n1.print();
    n2.print();
    n1.div(n2);
    n1.print();

    // cout << "\nMultiplication :--\n";

    // n1.print();
    // n1.mul(n2);
    // n2.print();
    // n1.print();
}