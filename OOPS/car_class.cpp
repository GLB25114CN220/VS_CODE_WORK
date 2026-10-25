#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
};
int main()
{
    car c1;
    c1.name = "kia sonet";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20Compatible = true;

    car c2 = {"Fortuner", 200, 113, false};
    cout << c2.name << " " << c2.power << " " << c2.mileage << " " << c2.isE20Compatible << endl;
    return 0;
}