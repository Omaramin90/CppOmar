#include <iostream>
#include <string>

using namespace std;

int main() {

	float userInput{};
	float total;
	float monthlySalary;

	cout << "Find out what your pay increase will be! ";
	cout << "Enter your current annual salary-";
	cin >> userInput;

	
	total = (userInput *.076 + userInput);
	cout << "Your new salary is: " << total;

	monthlySalary = (total / 26 * 2);
	cout << " Your monthly salary is: " << monthlySalary << endl;
		
	

	return 0;
}