#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

int main (){
    stringstream ss;
    string userInput;
    vector<int> numbers = {8, 3, 5, 1, 7, 4};
    int value;
    int result;

    // Failed conversion will throw ios_base::failure
    ss.exceptions(ios::failbit);

    getline(cin, userInput);

    while(userInput != "end") {
        try {
            ss.str("");
            ss.clear();
            ss << userInput;
            ss >> value;

            // Possible logic_error: out of range
            if (value < 0){
                result = numbers.at(value);
            }
            else {
                //Division by zero will throw runtime_error
                if (value == 0) {
                    throw runtime_error("z");
                }
                result = 60 / value;
                cout << result << endl;
            }
        }
        catch (ios_base::failure& excpt){
            cout << "t" << endl;
        }
        catch (runtime_error& excpt){
            cout << excpt.what() << endl;
        }
        catch (logic_error& excpt){
            cout << "c" << endl;
        }
        getline(cin, userInput);
        ss.clear();
    }
    cout << "OK" << endl;

    return 0;
}