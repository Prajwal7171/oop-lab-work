
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
};

class ElectricScooter : public Vehicle
{
private:
    int battery;

public:
    void setDetails(string b, int batt)
    {
        brand = b;
        battery = batt;
    }

    void showDetails()
    {
        cout << "Vehicle Brand: " << brand << endl;
        cout << "Battery Level: " << battery << endl;
    }
};

int main()
{
    ElectricScooter myscooter;

    myscooter.setDetails("Bajaj Chetak", 98);

    myscooter.showDetails();

    return 0;
}
