#include <iostream>

using namespace std;

int main () {
    int userAge;
    cin.exceptions(ios::failbit);

    cout << "Enter your age: ";

    try {
        cin >> userAge;

        if (userAge < 0) {
            throw runtime_error("Age cannot be less than 0.");
        }
        cout << userAge << " is a great age." << endl;
    }
    catch (ios_base::failure& e) {
        cout << "Invalid input." << endl;
    }
    catch (runtime_error& e){
        cout << e.what() << endl;
    }
    return 0;
}