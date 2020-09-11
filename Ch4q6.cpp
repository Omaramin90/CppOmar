
#include <iostream>
#include <string>

using namespace std;

int main() {


    bool paidTheAmount = false;
    double  totalPaid = 0.00;

    while (paidTheAmount == false) {

        char userInput;

        cout << "Please insert coins for $" << 3.50 - totalPaid << " - ";
        cin >> userInput;


        if (userInput == 'D') {
            totalPaid = totalPaid + 1;
        }
        else if (userInput == 'q') {
            totalPaid = totalPaid + 0.25;
        }
        else if (userInput == 'd') {
            totalPaid = totalPaid + 0.10;
        }
        else if (userInput == 'n') {
            totalPaid = totalPaid + 0.05;
        }
        else {
            cout << "Invalid input";
        }


        if (totalPaid >= 3.50) {
            paidTheAmount = true;
        }


    }

    cout << "Thanks for paying" << endl;
    cout << " Change returnred  $" << totalPaid - 3.50;




    cout << endl;



    return 0;
}
