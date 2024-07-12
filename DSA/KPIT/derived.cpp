#include <iostream>
#include <string>

using namespace std;

class Car
{
protected:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    virtual void printDetails() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class ElectricCar : public Car
{
private:
    int batteryRange;

public:
    ElectricCar(string b, string m, int y, int range) : Car(b, m, y), batteryRange(range) {}

    void setBatteryRange(int range)
    {
        batteryRange = range;
    }

    int getBatteryRange() const
    {
        return batteryRange;
    }

    void printDetails() const override
    {
        Car::printDetails();
        cout << "Battery Range: " << batteryRange << " miles" << endl;
    }
};

void printCarDetails(const Car &car)
{
    car.printDetails();
}

int main()
{
    Car car("Toyota", "Camry", 2020);
    ElectricCar electricCar("Tesla", "Model S", 2022, 350);

    cout << "Car Details:" << endl;
    printCarDetails(car);

    cout << "\nElectric Car Details:" << endl;
    printCarDetails(electricCar);

    return 0;
}
