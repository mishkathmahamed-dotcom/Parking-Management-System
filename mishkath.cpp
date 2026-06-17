#include<iostream>
#include<string.h>
using namespace std;

class Parking
{
    int vehicle_number, slot;
    double entry_time, exit_time, rate, total;
    string vehicle_type;

public:
    void getdata(int v, int s, double en, double ex, double r, string ve)
    {
        vehicle_number = v;
        slot = s;
        entry_time = en;
        exit_time = ex;
        rate = r;
        vehicle_type = ve;
    }

    void display()
    {
        cout << "Vehicle number: " << vehicle_number << endl;
        cout << "Type of vehicle: " << vehicle_type << endl;
        cout << "Slot number: " << slot << endl;
        cout << "Entry time: " << entry_time << endl;
        cout << "Exit time: " << exit_time << endl;
        total = rate * (exit_time - entry_time);
        cout << "Total bill: " << total << endl;
    }
};

int main()
{
    int vehicle, slots, n, i, choice;
    double ra, entry, ex;
    string name;

    cout << "Enter the total no of parking slots: ";
    cin >> n;
    Parking p[n];

    for(i = 0; i < n; i++)
    {
        cout << "Enter choice (1 to park, 0 to skip): ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter vehicle number: " << endl;
            cin >> vehicle;
            cout << "Enter the slot number: " << endl;
            cin >> slots;
            cout << "Enter Entry Time: " << endl;
            cin >> entry;
            cout << "Enter Exit Time: " << endl;
            cin >> ex;
            cout << "Enter vehicle type: " << endl;
            cin >> name;
            cout << "Enter rate: " << endl;
            cin >> ra;

            p[i].getdata(vehicle, slots, entry, ex, ra, name);
            p[i].display();
        }
        else
        {
            cout << "Slot skipped" << endl;
        }
    }

    return 0;
}
