#include <iostream>
using namespace std;
class Example
{
private:
    int health;
    int lavel;
    string name;

public:
    int gethealth()
    {
        return health;
    }
    int getlavel()
    {
        return lavel;
    }
    string getname()
    {
        return name;
    }
    int sethealth(int h)
    {
        health = h;
    }
    int setlavel(int l)
    {
        lavel = l;
    }
    string setname(string str)
    {
        name = str;
    }
};
int main()
{

    Example E;

    // Statycally creating the obejects
    E.setname("hritik");
    E.sethealth(100);
    E.setlavel(100);

    cout << "health is" << E.gethealth() << endl;
    cout << "lavel is " << E.getlavel() << endl;
    cout << "name is " << E.getname() << endl;

    // now Dynamically alolocate the object

    Example *Ex = new Example;

    Ex->sethealth(200);
    Ex->setlavel(230);
    Ex->setname("Hritik");

    cout << "Helth is " << Ex->gethealth() << endl;
    cout << "lavel is " << Ex->getlavel() << endl;
    cout << "Name is " << Ex->gethealth() << endl;

    // more way to acces and print the objects

    cout << "name is " << (*Ex).getname() << endl;
    cout << "Lavel is " << (*Ex).getlavel() << endl;
    cout << "Health si " << (*Ex).gethealth() << endl;
}