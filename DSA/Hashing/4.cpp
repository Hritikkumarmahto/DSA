#include <iostream>
using namespace std;
class Car
{
private:
    /* data */
    string brand;
    string model;
    int year;

public:
    void setbrand(string brands)
    {

        brand = brands;
    }
    void setmodel(string model)
    {

        this->model = model;
    }
    void setyear(int year)
    {

        this->year = year;
    }
    void getbrand()
    {
        cout << brand << " " << model << " " << year;
    }
};
int main()
{
    Car newcar;
    newcar.setbrand("tata");
    newcar.setmodel("sux");
    newcar.setyear(1234);
    newcar.getbrand();
}
