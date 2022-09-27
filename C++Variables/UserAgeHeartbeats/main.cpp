// Program calculates user's age in days and minutes based on
// user's age in years. Program also calculates total heartbeat
// in user's lifetime - incremental development

#include <iostream>
using namespace std;

int main(){
    int userAgeYears;
    int userAgeDays;

    cout << "Enter your age in years: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;

    cout << "You are " << userAgeDays << " days old." << endl;

    return 0;
}