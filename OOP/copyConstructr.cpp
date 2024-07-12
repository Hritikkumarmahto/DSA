#include <iostream>
using namespace std;
class Example
{
private:
    int level;
    int health;
    string name;

public:
    int getlevel()
    {
        return level;
    }
    int gethealth()
    {
        return health;
    }
    string getname()
    {
        return name;
    }

public:
    int setlevel(int l)
    {
        level = l;
    }
    int sethealth(int h)
    {
        health = h;
    }
    string setname(string str)
    {
        name = str;
    }
    Example(int health, int level)
    {
        cout << "default constructor";
        this->health=health;
        this->level=level;
    }

    void print()
    {
        cout<<"health is "<<this->health<<endl;

    }
};
int main()
{
    // Example *Hritik = new Example;
    // Example *Kumar=new Example;

    Example Hritik(23, 30);
    Example Kumar(Hritik);
    Hritik.print();

    // Hritik->sethealth(20);
    // Hritik->setlevel(30);
    // Hritik->setname("hritik");

    // cout << "Name is " << Hritik->getname() << endl;
    // cout << "His health is " << Hritik->gethealth() << endl;
    // cout << "his level is " << Hritik->getlevel();
}