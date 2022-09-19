#include <iostream>
using namespace std;

int GetNumNickels(){
    int numNickelParam;

    cout << "Enter number of Nickels: ";
    cin >> numNickelParam;
    if (numNickelParam < 0){
        throw runtime_error("Number must be greater or equal to 0.");
    }

    return numNickelParam;
}

int GetNumDimes(){
    int numDimesParam;
    cout << "Enter number of dimes: ";
    cin >> numDimesParam;
    if (numDimesParam < 0){
        throw runtime_error("Number must be greater or equal to 0.");
    }

    return numDimesParam;
}

int main(){
    int numCoins;
    int numNickels;
    int numDimes;

    cin.exceptions(ios_base::failbit);

    try {
        numNickels = GetNumNickels();
        numDimes = GetNumDimes();

        numCoins = numNickels + numDimes;
        cout << "There are " << numCoins << " coins." << endl;
    }
    catch (ios_base::failure& excpt) {
        cout << "Invalid input." << endl;
    }
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }

    return 0;
}
