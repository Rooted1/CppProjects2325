#include <iostream>

using namespace std;

int main (){
    int yourFriends;
    int totalFriends;
    cin.exceptions(ios_base::failbit);

    try {
        cout << "Enter the number of people you know: ";
        cin >> yourFriends;

        if (yourFriends < 0) {
            throw runtime_error("Please enter numbers greater than 0");
        }

        totalFriends = yourFriends;
        cout << " You know " << totalFriends << " people.\n";
        totalFriends = totalFriends * yourFriends;

        cout << " Those people know " << totalFriends << " people.\n";
        totalFriends = totalFriends * yourFriends;
        cout << " And they know " << totalFriends << " people.\n\n";
    }
    catch (ios_base::failure& e) {
        cout << "Invalid entry." << endl;
    }
    catch (runtime_error& excpt){
        cout << excpt.what() << endl;
    }

    return 0;
}