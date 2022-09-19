#include <iostream>
using namespace std;

int main(){
    int numCoins;
    int numNickels;
    int numDimes;

    cin.exceptions(ios_base::failbit);

    try {
        cout << "Enter number of Nickels: ";
        cin >> numNickels;
        if (numNickels < 0){
            throw runtime_error("Number must be greater or equal to 0.");
        }
        else {
            cout << "Enter number of dimes: ";
            cin >> numDimes;
            if (numDimes < 0){
                throw runtime_error("Number must be greater or equal to 0.");
            }
        }

        numCoins = numNickels + numDimes;
    }
    catch (ios_base::failure& excpt) {
        cout << "Invalid input." << endl;
    }
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }

    return 0;
}
