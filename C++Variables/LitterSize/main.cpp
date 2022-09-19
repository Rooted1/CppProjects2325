#include <iostream>
using namespace std;

int main () {
    int litterSize;
    int yearlyLitters;
    int annualMice;

    litterSize = 3;
    yearlyLitters = 5;

    cout << "One female mouse may give birth to ";
    annualMice  = litterSize * yearlyLitters;
    cout << annualMice << " mice," << endl;

    litterSize = 14;
    yearlyLitters = 10;

    cout << "add up to ";
    annualMice = litterSize * yearlyLitters;
    cout << annualMice << " mice, in a year." << endl;

    return 0;
}