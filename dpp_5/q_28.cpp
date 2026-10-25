#include <iostream>
using namespace std;
double balance = 0.0;
int deposit(double amount)
{
    balance += amount;
    return balance;
}
int withdraw(double amount)
{
    balance -= amount;
    return balance;
}
int main()
{
    int d, w;
    cout << "Enter the amount u want to deposit : ";
    cin >> d;
    cout << "Enter the amount u want to withdraw : ";
    cin >> w;
    int st1 = deposit(d);
    int st2 = withdraw(w);
    cout << "Balance : " << balance;
    return 0;
}