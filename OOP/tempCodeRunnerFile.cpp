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

    int getHealth()
    {
        return health;
    }
    string getNmae()
    {