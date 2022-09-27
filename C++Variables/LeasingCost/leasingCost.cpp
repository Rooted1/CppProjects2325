// this is a simple program that computes the total cost
// of leasing a car given the down payment, monthly rate,
// and number of months

#include <iostream>
using namespace std;

int main() {
    int downPayment;
    int paymentPerMonth;
    int numMonths;
    int totalCost;

    cout << "Enter down payment: ",
    cin >> downPayment;

    cout << "Enter monthly payment: ";
    cin >> paymentPerMonth;

    cout << "Enter number of months: ";
    cin >> numMonths;

    totalCost = downPayment + (paymentPerMonth * numMonths);

    cout << "Total cost: " << totalCost << endl;

    return 0;
}