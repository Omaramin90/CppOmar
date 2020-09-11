#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream inFile;
	ofstream outFile;

	string a, b;

	cout << "Welcome to your junkmail folder. Loading first message, please wait... " << endl;

	cout << " Please enter your name ";
	cin >> b;

	inFile.open("junkemail.txt");

	if (inFile.fail()) {
		cout << "unable to open file" << endl;
		exit(1);
	}



	inFile >> a;

	outFile.open("result.txt", fstream::app);

	if (outFile.fail()) {
		cout << "Unable to open file - result.txt" << endl;

	}
	outFile << b+a << endl;
	cout << "The Junk email is printed in the result file " << endl;

	inFile.close();
	outFile.close();

}