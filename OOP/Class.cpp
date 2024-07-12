#include <iostream>
using namespace std;
class Hero
{
 // properties
public:
    int health;
    string name;
    int level;
};
int main()
{
    // creation of object
    Hero hritik; // here hritik is a object od Hero class 

    hritik.health = 40; // we call the proeprty of the hero class using . operator
    hritik.name = "Hritik";
    hritik.level = 234;

    cout << "Health is " << hritik.health << endl;
    cout << "Name is " << hritik.name << endl;
    cout << "His Level is " << hritik.level << endl;
    cout << "Level Sabke Niklenge";
}