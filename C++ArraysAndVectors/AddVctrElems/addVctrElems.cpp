/*
Program adds element in original list with corresponding value in offset amount.
Output each sum followed by a space.
Ex: origList = {40, 50, 60, 70} offsetAmount = {5, 7, 3, 0}
Output: 45 57 63 70
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int NUM_VALS = 4;
    vector<int> origList(NUM_VALS);
    vector<int> offsetAmount(NUM_VALS);
    unsigned int i;
    
    cout << "Enter origList elements: " << endl;
    for (i = 0; i < origList.size(); ++i){
        cin >> origList.at(i);
    }

    cout << "Enter offset amounts: " << endl;
    for (i = 0; i < offsetAmount.size(); ++i){
        cin >> offsetAmount.at(i);
    }

    cout << "Each sum: " << endl;
    for (i = 0; i <origList.size(); ++i){
        cout << origList.at(i) + offsetAmount.at(i) << " ";
    }

    cout << endl;

    return 0;
}