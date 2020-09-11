#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{

	char sentence[1000];
	char str[100][100];
	int i = 0;
	int j, k, s;
	char last;
	cout << "Write -1 in a new sentence to stop the input....\n\n";
	while (cin.getline(str[i], 100))
	{
		if (str[i][0] == '-' && str[i][1] == '1') break;

		i++;

	}

	s = 0;
	last = '.';

	for (j = 0; j < i; j++)
	{

		for (k = 0; str[j][k] != '\0'; k++)
		{

			if (str[j][k] == ' ' && last == ' ') continue;
			if (last == '.') sentence[s++] = toupper(str[j][k]);
			else sentence[s++] = tolower(str[j][k]);
			last = sentence[s - 1];
		}
	}
	sentence[s] = '\0';
	cout << "OUTPUT : \n" << endl;
	cout << sentence << endl;
	return 0;
}
