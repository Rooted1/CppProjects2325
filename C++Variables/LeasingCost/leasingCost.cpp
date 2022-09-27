// this is a simple program that computes the total cost
// of leasing a car given the down payment, monthly rate,
// and number of months

#include <iostream>
using namespace std;

int GetDownPayment(){
    int downPayment;
    cout << "Enter down payment: ",
    cin >> downPayment;
    return downPayment;
}

int GetPaymentPerMnth(){
    int paymentPerMonth;
    cout << "Enter monthly payment: ";
    cin >> paymentPerMonth;
    return paymentPerMonth;
}

int GetNumMnths(){
    int numMonths;
    cout << "Enter number of months: ";
    cin >> numMonths;
    return numMonths;
}

int main() {
    int downPayment;
    int paymentPerMonth;
    int numMonths;
    int totalCost;

    downPayment = GetDownPayment();
    paymentPerMonth = GetPaymentPerMnth();
    numMonths = GetNumMnths();

    totalCost = downPayment + (paymentPerMonth * numMonths);

    cout << "Total cost: " << totalCost << endl;

    return 0;
}