#include <iostream>
using namespace std;

double interest_cal(double rate, double months, double balance);

int main()
{
    double rate, months, interest, balance;

    cout << "Please enter the initial balance(Press 0 to end program)\n";
    cin >> balance;

    while (balance != 0)
    {

        cout << "Please enter the rate\n";
        cin >> rate;

        cout << "Please enter the number of months\n";
        cin >> months;

        rate = rate * 0.01 / 12;
        interest = interest_cal(rate, months, balance);

        cout << "Your interest owed is " << interest << " \n";

        cout << "Please enter the initial balance(Press 0 to end program)\n";
        cin >> balance;

    }


    system("pause");
    return 0;
}

double interest_cal(double rate, double months, double balance)
{
    double interest, total_int = 0;
    for (int count = 1; count <= months; count++)
    {
        interest = rate * balance;
        balance = balance + interest;
        total_int += interest;
    }
    return total_int;
}