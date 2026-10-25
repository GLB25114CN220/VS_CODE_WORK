#include <bits/stdc++.h>
using namespace std;
class cricketer
{
public:
    string name;
    int runs;
    float average;
    cricketer(string name, int runs, float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};
int main()
{
    cricketer c1("Virat Kohli", 9786, 55.67);
    cricketer c2("Sachin Tendulkar", 14000, 49.67);

    // cricketer *ptr = &c1;
    // ptr->name = "Yash Bhardwaj";
    // ptr->average = 66;

    cricketer *p = new cricketer("ABD",13000,67.4);
    p->print();
    cout<<endl;
    cricketer *p1 = &c2;
    p1->print();

    return 0;
}