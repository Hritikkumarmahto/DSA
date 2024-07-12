#include <iostream>
using namespace std;

class Cusntructor
{
public:
    int helth;
    Cusntructor() // Default cunstructor
    {
        cout << "Cunstructor is created" << endl;
    }

    Cusntructor(int helth) // perametreriser cunstructor
    {
        cout << "this address is " << this << endl;
        this->helth = helth; // call the current helth object and
                             // this is a pointer and it will store the address  of the previpously defined int helht

        cout<<"helth is "<<helth;
    }
};
int main()
{
    Cusntructor cnstr(30); // Statically called the cunstructor
    cout << "His lavel is " << &cnstr << endl;
    Cusntructor *Cnstructor = new Cusntructor(); // Dynamicallt called the cunstructor
}