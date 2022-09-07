#include <iostream>

using namespace std;

int main () {

    // Declare variables
    int weightVal; 
    int heightVal;
    float bmiCalc;
    char quitCmd;

    quitCmd = 'a';

    while (quitCmd != 'q') {
        
        try {

            
            // Get user data
            cout << "Enter weight (in pounds): ";
            cin >> weightVal;

            // Error checking for non-negative weight
            if (weightVal < 0) {
                throw runtime_error("Invalid weight.");
            }
            else {
                cout << "Enter height (in inches): ";
                cin >> heightVal;

                // Error checking for non-negative height
                if (heightVal < 0){
                    throw runtime_error("Invalid height.");
                }
            }

            // calculate BMI value
            bmiCalc = (static_cast<float>(weightVal) / static_cast<float>(heightVal * heightVal)) * 703.0;
            // Print user health info
            cout << "BMI: " << bmiCalc << endl;
            cout << "(CDC: 18.6-24.9 normal)" << endl;
        }

        catch (runtime_error& excpt){
            // Prints the error message passed by throw statement
            cout << excpt.what() << endl;
            cout << "Cannot compute health info";
        }
        
        // Get user prompt to continue/quit
        cout << endl << "Enter any key ('q' to quit): ";
        cin >> quitCmd;

    }
    return 0;
}