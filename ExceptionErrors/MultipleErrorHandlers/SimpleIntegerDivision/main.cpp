#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int userNum;
    int divNum;
    int result;
    cin.exceptions(ios::failbit);

    try {
        cin >> userNum;
        cin >> divNum;

        if (divNum == 0) {
            throw runtime_error("Runtime Exception: Divide by zero!");
        }
        else {
            result = userNum / divNum;
            cout << result << endl;
        }
    }
    catch (ios_base::failure& e){
        cout << "Input Exception: basic_ios::clear: iostream error" << endl;
    }
    catch (runtime_error& e){
        cout << e.what() << endl;
    }

    return 0;
}