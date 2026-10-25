#include <bits/stdc++.h>
using namespace std;
class cricketer
{
private:
    string name;
    int runs;
    float average;
public:
    cricketer(string name, int runs, float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
    void print() // getter
    {
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
    int getruns() // getter
    {
        return runs;
    }
    void setruns(int runs) // setter
    {
        this->runs = runs;
    }
};
int main()
{
    cricketer c1("Virat Kohli", 9786, 55.67);
    cricketer c2("Sachin Tendulkar", 14000, 49.67);

    
    cout<<c1.getruns()<<endl;
    c1.setruns(12000);
    cout<<c1.getruns();
    return 0;
}