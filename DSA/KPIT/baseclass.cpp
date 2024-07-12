#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    void setBrand(string b)
    {
        brand = b;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    string getBrand() const
    {
        return brand;
    }

    string getModel() const
    {
        return model;
    }

    int getYear() const
    {
        return year;
    }
};

int main()
{
    Car myCar("Toyota", "Camry", 2020);

    cout << "Brand: " << myCar.getBrand() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
