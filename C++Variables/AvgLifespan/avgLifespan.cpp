#include <iostream>

using namespace std;

int main(){
    int avgLifespan = 70;
    int userAge;
    cin.exceptions(ios_base::failbit);
    
    try {
        cout << "Enter your age: ";
        cin >> userAge;

        if(userAge < 0){
            throw runtime_error("Invalid age. Please enter numbers greater than 0.");
        }
        cout << userAge << " is a great age" << endl;
        cout << "Average lifespan is " << avgLifespan << endl;

    }
    catch (ios_base::failure& excpt) {
        cout << "Pls enter numbers only" << endl;
    }
    catch (runtime_error& excpt){
        cout << excpt.what() << endl;
    }
    return 0;
}