#include <iostream>
using namespace std;
class fraction
{
public:
    float num;
    float den;
    fraction(int num, int den)
    {
        this->num = num;
        this->den = den;
        simplify();
    }
    void add(fraction &f)
    {
        num = ((num * f.den) + (f.num * den));
        den = (den * f.den);
        simplify();
    }
    void multiply(fraction &f)
    {
        num = num * f.num;
        den = den * f.den;
        simplify();
    }
    void simplify()
    {
        int hcf = gcd(num, den);

        num /= hcf;
        den /= hcf;
    }
    int gcd(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }
        return gcd(b % a, a);
    }
    void print()
    {
        cout << (num) << "/" << (den);
    }
};

// fraction multiply(fraction &f1, fraction &f2)
// {
//     fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den;
//     return res;
// }
// fraction addition(fraction &f1, fraction &f2)
// {
//     fraction add;
//     add.num = ((f1.num * f2.den) + (f2.num * f1.den));
//     add.den = f1.den * f2.den;
//     return add;
// }
// fraction subtraction(fraction &f1, fraction &f2)
// {
//     fraction sub;
//     sub.num = ((f1.num * f2.den) - (f2.num * f1.den));
//     sub.den = f1.den * f2.den;
//     return sub;
// }

int main()
{
    fraction f1(4, 10);
    fraction f2(15, 25);

    // fraction mul = multiply(f1, f2);

    // f1.print();
    // cout<<endl;
    // f1.multiply(f2); // f1 ne call lagaye and f2 pass kiya with the help of a function then answer f1 me hi store ho gaya
    // f1.print();

    f1.print();
    cout << endl;
    f1.add(f2);
    f1.print();
    cout<<endl;
    f2.print();

    // fraction add = addition(f1, f2);
    // fraction sub = subtraction(f1, f2);
    // mul.print();
    // cout<<endl;
    // add.print();
    // cout << endl;
    // sub.print();
    return 0;
}