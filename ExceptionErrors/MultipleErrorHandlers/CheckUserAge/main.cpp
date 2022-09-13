// This program takes single-word first names and ages
// and outputs the name with the age incremented.
// The program fails and throws an exception if the age input 
// is a string rather than an int. 
// Add a try/catch statement to catch ios_base::failure, and output 0 for the age

#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputName;
    int age;
    
    // Set exception mask for cin stream
    cin.exceptions(ios::failbit);

    cin >> inputName;
    while (inputName != "-1") {
        try {
            cin >> age;
            if (cin.fail()) {
                throw runtime_error("z");
            }

            cout << inputName << " " << (age+1) << endl;
        }
        catch (ios_base::failure& excpt){
            cout << inputName << " " << 0 << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        cin >> inputName;
    }
    return 0;
}