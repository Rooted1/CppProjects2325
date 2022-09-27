// Program calculates user's age in days and minutes based on
// user's age in years. Program also calculates total heartbeat
// in user's lifetime - incremental development

#include <iostream>
using namespace std;

int main(){
    int userAgeYears;
    int userAgeDays;
    int userAgeMinutes;

    cout << "Enter your age in years: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;               // calculate days without leap years
    userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

    cout << "You are " << userAgeDays << " days old." << endl;

    userAgeMinutes = userAgeDays * 24 * 60;
    cout << "You are " << userAgeMinutes << " minutes old." << endl;

    return 0;
}