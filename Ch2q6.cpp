#include <iostream>
#include <string>

using namespace std;

int main() {

	float userHours{};
	int dependants;
	float grossPay;
	float netPay;
	float sst, fit, sit, ud, hi;

	cout << "Your Electronic Pay stub!";
	cout << " Welcome to the electronic pay stub service. Please enter in the number of hours you worked this week.";
	cin >> userHours;

	grossPay = 16.78 * userHours; 

	if (userHours >= 81) {
		grossPay = 16.78 * userHours * 1.5;
		cout << "You've made overtime! ";
	};

	cout << "Your gross pay is - " << grossPay;

	cout << " Now it's time to calculate your Net Pay. ";

    sst = grossPay * 0.06;
	fit = grossPay * 0.14;
	sit = grossPay * 0.05;
	ud = 20;
	hi = 35;

	netPay = grossPay - sst - fit - sit - ud;

	cout << " Do you Have 3 or more dependants in your household? ";
	cin >> dependants;

	if (dependants = 'yes') {
		netPay = grossPay - sst - fit - sit - ud - hi;
	}else {(dependants = 'no'); 
	netPay = grossPay - sst - fit - sit - ud;
	};

	cout << " Your net pay is - " << netPay << endl;

	return 0;

}