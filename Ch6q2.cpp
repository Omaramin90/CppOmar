#include <iostream>

#include <fstream>

#include<string>

using namespace std;

void calculateAverage(ifstream&, ofstream&);

int main()

{

    ifstream inputFile;

    ofstream outputFile;

    inputFile.open("HW8_Q21.txt");

    if (inputFile.fail())

    {

        cout << "input file did not open please check it\n";

        system("pause");

        return 1;

    }

    outputFile.open("HW8_Q22.txt");

    calculateAverage(inputFile, outputFile);

    outputFile.close();

    inputFile.close();

    system("pause");

    return 0;

}

void calculateAverage(ifstream& infile, ofstream& outFile)

{

    int i, sumGrades, eachScore;

    string firstName, lastName;

    double average = 0.0;

    infile >> firstName;

    while (infile)

    {

        sumGrades = 0;

        infile >> lastName;

        outFile << firstName << " " << lastName << " ";

        for (i = 0; i < 10; i++)

        {

            infile >> eachScore;

            outFile << eachScore << " ";

            sumGrades += eachScore;

        }

        average = sumGrades / 10.0;

        outFile << average << endl;

        infile >> firstName;

    }

}