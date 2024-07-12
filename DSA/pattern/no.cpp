#include <iostream>
using namespace std;

void goldRoomService()
{
    cout << "Gold room service selected." << endl;
    cout << "Available options:" << endl;
    cout << "1. Spa" << endl;
    cout << "2. Gym" << endl;
    cout << "3. Drinks" << endl;
    cout << "2. Pool" << endl;
}

void silverRoomService()
{
    cout << "Silver room service selected." << endl;
    cout << "Available options:" << endl;
    cout << "1. Spa" << endl;
    cout << "2. Gym" << endl;
    cout << "3. Drinks " << endl;
    cout << "4. Pool" << endl;
}

void bronzeRoomService()
{
    cout << "Bronze room service selected." << endl;
    cout << "Available options:" << endl;
    cout << "1. Spa" << endl;
    cout << "2. Gym" << endl;
    cout << "3. Drinks" << endl;
    cout << "4. Gym" << endl;
}

int main()
{
    int n, type, service, more;
    cout << "Enter the number of days: ";
    cin >> n;
    cout << "Enter which room service you want:" << endl;
    cout << "1. Gold" << endl;
    cout << "2. Silver" << endl;
    cout << "3. Bronze" << endl;
    cin >> type;

    switch (type)
    {
    case 1:
        goldRoomService();
        break;
    case 2:
        silverRoomService();
        break;
    case 3:
        bronzeRoomService();
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    cout << "Enter the service you want to avail: ";
    cin >> service;

    switch (service)
    {
    case 1:
        cout << "Spa service selected." << endl;
        break;
    case 2:
        cout << "Gym service selected." << endl;
        break;
    case 3:
        cout << "your drink wiil at the table at night" << endl;
        break;
    case 4:
        cout << "commo lets go to the pool" << endl;
        break;
    default:
        cout << "Invalid service choice." << endl;
        break;
    }
   

    return 0;
}
