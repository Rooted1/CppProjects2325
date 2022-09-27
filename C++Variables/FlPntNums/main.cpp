// this program calculates how long a user travels based on mileage to travel

#include <iostream>
using namespace std;

int main() {
    double milesTravel;
    double hoursFly;
    double hoursDrive;

    cout << "Enter miles to travel: ";
    cin >> milesTravel;

    hoursFly = milesTravel / 500.0; // plane flies 500mph 
    hoursDrive = milesTravel / 60.0; // cars drive 60mph

    cout << milesTravel << " miles would take:" << endl;
    cout << "    " << hoursFly << " hours to fly" << endl;
    cout << "    " << hoursDrive << " hours to drive" << endl;

    return 0;
}