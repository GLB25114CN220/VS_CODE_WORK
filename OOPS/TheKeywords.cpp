#include <bits/stdc++.h>
using namespace std;
class pokemon
{
public:
    string name;
    string type;
    int hp;

    pokemon(string name, string type, int hp) // if same keyword are used
    {
        this->name = name;
        this->type = type;
        this->hp = hp;
    }
    void print()
    {
        cout << name << " " << type << " " << hp << endl;
    }
};
int main()
{
    pokemon p1("charizard","fire",77);
    pokemon p2("pikachu","electric",97);
    pokemon p3("mewtwo","psychic",87);

    p3.print();
}