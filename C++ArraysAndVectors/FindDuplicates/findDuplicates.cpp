#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int matchValue;
    unsigned int i;
    int numMatches;
    vector<int> userValues(NUM_VALS);
    cout << "Enter match value: ";
    cin >> matchValue;

    cout << "Enter values to match: ";
    for (i = 0; i < userValues.size(); ++i) {
        cin >> userValues.at(i);
    }

    numMatches = 0;
    for (i = 0; i < userValues.size(); ++i){
        if (userValues.at(i) == matchValue) {
            numMatches += 1;  
        }
    }

    cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

    return 0;
}