#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print()
    {
        cout << name << " " << power << " " << mileage << " " << isE20Compatible << endl;
    }
};
void check(car &x)
{
    x.name = "jimny";
}
int main()
{
    car c1;
    c1.name = "kia sonet";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20Compatible = true;
    
    car c2 = {"Fortuner", 200, 113, false};

    check(c1);

    c1.print();
    return 0;
}