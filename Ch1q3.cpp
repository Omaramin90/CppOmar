#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	double quarters, nickles, dimes, total;
	
	
		cout << "Calculate your money!\n";
	cout << "Enter the number of quarters you have:\n";
	cin >> quarters;

	cout << "Enter the number of nickels you have:\n";
	cin >> nickles;

	cout << "Enter the number of dimes you have:\n";
	cin >> dimes;

	total =  quarters *0.25 + nickles *0.10 + dimes *0.05;
	cout << "You have: " << total << endl;
		

	return 0;

}