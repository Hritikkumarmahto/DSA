#include <iostream>
using namespace std;
class Hero
{
    // properties
private:
    int health;

    string name;
    int level;
    // Here we will creat getter and setter methods to access the private members

public: // Keep in mind we have to creat the metods private to access the get adn set methods
    int getHealth()
    {
        return health;
    }
    string getName()
    {
        return name;
    }
    int getLevel()
    {
        return level;
    }
    // Set Method to sett the value
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(int l)
    {
        level = l;
    }
};
int main()
{
    // creation of object
    Hero hritik; // here hritik is a object od Hero class

    cout << "Hritik's Helth is " << hritik.getHealth() << endl;
    cout << "His level is " << hritik.getLevel() << endl;
    cout << "his Name is " << hritik.getName();

    // Set the properties

    hritik.setHealth(40);
    hritik.setLevel(35);

    cout << "Hritik's Helth is " << hritik.getHealth() << endl;
    cout << "Hritiks Level si " << hritik.getLevel();

    return 0;
}