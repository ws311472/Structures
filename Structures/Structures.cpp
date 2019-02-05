#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct User
{
	string sName;
	int iAge;
	float fHeight;
	int iNumbers[5];

};

void PopulateDetails(User *objUserPass, const int *iSizePass)
{
	for (int iCount = 0; iCount < *iSizePass; iCount++)
	{
		cout << "Please enter the name of the user\n";
		cin >> objUserPass[iCount].sName;

		cout << "\nPlease enter your age " << objUserPass[iCount].sName;
		cin >> objUserPass[iCount].iAge;

		cout << "\nPlease enter your Height " << objUserPass[iCount].sName;
		cin >> objUserPass[iCount].fHeight;
	}
}

void OutputDetails(User *objUserPass, const int *iSizePass)
{
	for (int iCount = 0; iCount < *iSizePass; iCount++)
	{
		cout << "Name: " << objUserPass[iCount].sName
			<< "\nAge: " << objUserPass[iCount].iAge
			<< "\nHeight: " << objUserPass[iCount].fHeight;
	}
}

void UpdateNumberForAllUsers(User *objUserPass, const int *iSizePass)
{
	for (int iCount = 0; iCount < *iSizePass; iCount++)
	{
		cout << "Please enter the numbers for " << objUserPass[iCount].sName;

		for (int iCount2 = 0; iCount2 < 5; iCount2++)
		{
			cout << "\nPlease enter number " << iCount2 + 1;
			cin >> objUserPass[iCount].iNumbers[iCount2];
		}

	}

}

void CalculateTotalByUser(User *objUserPass, const int *iSize)
{
	int iTotal = 0;

	for (int iCount1 = 0; iCount1 < *iSize; iCount1++)
	{
		cout << "\nCalculating the total for: " << objUserPass[iCount1].sName;

		for (int iCount2 = 0; iCount2 < 5; iCount2++)
		{
			iTotal += objUserPass[iCount1].iNumbers[iCount2];
		}

		cout << "\nThe total is: " << iTotal;
	}
}

int main()
{

	const int iSize = 3;
	User objUser[iSize];

	PopulateDetails(objUser, &iSize);
	OutputDetails(objUser, &iSize);

	_getch();


	/*for (int iCount = 0; iCount < iSize; iCount++)
	{
	cout << "Please enter the users name \n";
	cin >> objUser[iCount].sName;

	cout << "Please enter your age " << objUser[iCount].sName;
	cin >> objUser[iCount].iAge;

	cout << "Please enter your height" << objUser[iCount].sName;
	cin >> objUser[iCount].fHeight;

	}*/

	/*cout << "Welcome to the program\n";

	cout << "Please enter the name of the the user\n";
	cin >> objUser.sName;

	cout << "\nPlease enter your age " << objUser.sName;
	cin >> objUser.iAge;

	cout << "\nPlease enter your height \n";
	cin >> objUser.fHeight;*/


	return 0;
}