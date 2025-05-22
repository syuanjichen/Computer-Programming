#include <iostream>
#include <iomanip> // You're going to use the functions in this header file, so you must have this line.

using namespace std;

int main()
{
    int num = 46;
    double mass = 106.42;
    double melt = 1828.05;
    double boil = 3236.00;
    double expansion = 0.0000118;
    cout << "Atomic Number (hex) = "<< hex << num << endl;
    cout << "Atomic Number (hex, withbase) = " << hex << showbase << num << endl;
    cout << "Atomic Number (hex, withbase, uppercase) = " << hex << showbase << uppercase << num << endl;
    cout.unsetf(ios_base::hex|ios_base::uppercase);
    cout << "Standard Atomic Weight = "  << fixed << setprecision(6) << mass << endl;
    cout << "Melting Point (K) = "  << fixed << setprecision(2) << melt << endl;
    cout << "Boiling Point (K) = "  << fixed << setprecision(2) << boil << endl;
    cout << "Thermal Expansion = "  << scientific << expansion << endl;  
    return 0;
}