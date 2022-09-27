// Program calculates user's age in days and minutes based on
// user's age in years. Program also calculates total heartbeat
// in user's lifetime - incremental development

#include <iostream>
using namespace std;

int main(){
    int userAgeYears;
    int userAgeDays;
    int userAgeMinutes;
    int totalHeartbeats;
    int avgBeatsPerMinute = 72;

    cin.exceptions(ios_base::failbit);

    try {
        cout << "Enter your age in years: ";
        cin >> userAgeYears;

        if (userAgeYears < 0){
            throw runtime_error("Error: Enter a number greater or equal to 0.");
        }

        userAgeDays = userAgeYears * 365;               // calculate days without leap years
        userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

        cout << "You are " << userAgeDays << " days old." << endl;

        userAgeMinutes = userAgeDays * 24 * 60;
        cout << "You are " << userAgeMinutes << " minutes old." << endl;

        totalHeartbeats = userAgeMinutes * avgBeatsPerMinute;
        cout << "Your heart has  beat " << totalHeartbeats << " times." << endl;
    }

    catch(ios_base::failure& excpt){
        cout << "Invalid input. Please enter numbers.";
    }
    catch(runtime_error& excpt){
        cout << excpt.what() << endl;
    }

    return 0;
}