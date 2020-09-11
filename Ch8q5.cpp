#include <iostream>

#include <cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<istream>

using namespace std;

int main()
{
	char userString[101], ch1, ch2;
	int i, count;
	while (1) {i = 0; count = 0;
		cout << "Please enter a sentence to be modified: " << endl;
		cin.getline(userString, 100);
		while (userString[i] != '\0') {
			if (isalpha(userString[i])) {
				count++;
			}
			else {
				if (count == 4) {
					if ((userString[i - 4] >= 'A') && (userString[i - 4] <= 'Z')) {
						userString[i - 4] = 'L';
					}
					else {
						userString[i - 4] = 'l';
					}
					userString[i - 3] = 'o';
					userString[i - 2] = 'v';
					userString[i - 1] = 'e';
				}
				count = 0;
			}
			i++;
		}
		cout << userString << endl;
		cout << "Do you want to continue (Y/N) ? : ";
		cin >> ch1;
		if (ch1 == 'N') {
			break;
		}
		else {
			cin.getline(userString, 100);
		}
	}
}
