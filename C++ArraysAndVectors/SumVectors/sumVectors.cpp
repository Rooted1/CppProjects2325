#include <iostream>
#include <vector>

using namespace std;

int main(){
    const int NUM_ELEMENTS = 8;
    vector <int> userVals(NUM_ELEMENTS);
    unsigned int i;
    int sumVal;

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < userVals.size(); ++i){
        cout << "Value: ";
        cin >> userVals.at(i);
        cout << endl;
    }

    // calculate sum
    sumVal = 0;
    for (i = 0; i < userVals.size(); ++i){
        sumVal += userVals.at(i);
    }

    cout << "Sum: " << sumVal << endl;

    return 0;
}