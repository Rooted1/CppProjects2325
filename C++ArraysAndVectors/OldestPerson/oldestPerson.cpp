// program takes user input numberes 1 to 5 and prints out the age

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> oldestPeople(5);
    int nthPerson;

    oldestPeople.at(0) = 122;
    oldestPeople.at(1) = 119;
    oldestPeople.at(2) = 117;
    oldestPeople.at(3) = 117;
    oldestPeople.at(4) = 116;

    cout << "Enter N (1..5): ";
    cin >> nthPerson;

    if ((nthPerson >= 1) && (nthPerson <= 5)){
        cout << "The #" << nthPerson << " oldest person lived ";
        cout << oldestPeople.at(nthPerson-1) << " years." << endl;
    }

    return 0;
}