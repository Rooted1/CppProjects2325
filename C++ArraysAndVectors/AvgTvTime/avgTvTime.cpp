#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Source: www.statista.com, 2015
    const int NUM_COUNTRIES = 5;
    vector<string> ctryNames(NUM_COUNTRIES);
    vector<int> ctryMins(NUM_COUNTRIES);
    string userCountry;
    bool foundCountry = false;
    unsigned int i;

    //Fill vector contents
    ctryNames.at(0) = "China";
    ctryMins.at(0) = 155;

    ctryNames.at(1) = "Sweden";
    ctryMins.at(1) = 154;

    ctryNames.at(2) = "Russia";
    ctryMins.at(2) = 246;

    ctryNames.at(3) = "UK";
    ctryMins.at(3) = 216;

    ctryNames.at(4) = "USA";
    ctryMins.at(4) = 274;

    cout << "Enter country name: ";
    cin >> userCountry;

    foundCountry = false;
    for (i = 0; (i < ctryNames.size()) && (!foundCountry); ++i) {
        if (ctryNames.at(i) == userCountry) {
            foundCountry = true;
            cout << "People in " << userCountry << " watch ";
            cout << ctryMins.at(i) << " mins of TV daily." << endl;
        }
    }
    if (!foundCountry) {
        cout << "Country not found; try again." << endl;
    }
    return 0;
}