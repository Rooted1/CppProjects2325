// this is a simple program that computes the total cost
// of leasing a car given the down payment, monthly rate,
// and number of months

#include <iostream>
using namespace std;

int GetDownPayment(){
    int downPayment;
    cout << "Enter down payment: ",
    cin >> downPayment;

    if (downPayment < 0){
        throw runtime_error("Number must be greater or equal to 0");
    }

    return downPayment;
}

int GetPaymentPerMnth(){
    int paymentPerMonth;
    cout << "Enter monthly payment: ";
    cin >> paymentPerMonth;

    if (paymentPerMonth < 0){
        throw runtime_error("Number must be greater or equal to 0");
    }

    return paymentPerMonth;
}

int GetNumMnths(){
    int numMonths;
    cout << "Enter number of months: ";
    cin >> numMonths;

    if (numMonths < 0){
        throw runtime_error("Number must be greater or equal to 0");
    }

    return numMonths;
}

int main() {
    int downPayment;
    int paymentPerMonth;
    int numMonths;
    int totalCost;

    cin.exceptions(ios_base::failbit);

    downPayment = GetDownPayment();
    paymentPerMonth = GetPaymentPerMnth();
    numMonths = GetNumMnths();

    try{}
    catch(ios_base::failure& e){
        cout << "Invalid input." << endl;
    }
    catch(runtime_error& e){
        cout << e.what() << endl;
    }

    totalCost = downPayment + (paymentPerMonth * numMonths);

    cout << "Total cost: " << totalCost << endl;

    return 0;
}