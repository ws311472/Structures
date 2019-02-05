#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/*A data structure is a group of data elements grouped together under one name.
These data elements, known as members, can have different types and different lengths. */

struct User
{
	string sName;
	int iAge;
	float fHeight;
	int iNumbers[5];

};

//Pointers 'point' to specific memory locations.

void PopulateDetails(User *objUserPass, const int *iSizePass)
{
	for (int iCount = 0; iCount < *iSizePass; iCount++)
	{
		cout << "Please enter the name of the user" << endl;
		cin >> objUserPass[iCount].sName;

		cout << "Please enter your age" << objUserPass[iCount].sName << endl;
		cin >> objUserPass[iCount].iAge;

		cout << "Please enter your Height " << objUserPass[iCount].sName << endl;
		cin >> objUserPass[iCount].fHeight;
	}
}

void PopulateDetails(User *objUserPass) 
{
	cout << "Please enter the name of the user" << endl;
	cin >> objUserPass->sName;

	cout << "Please enter your age " << objUserPass->sName << endl;
	cin >> objUserPass->iAge;

	cout << "Please enter your Height " << objUserPass->sName << endl;
	cin >> objUserPass->fHeight;
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
		cout << "Please enter the numbers for " << objUserPass[iCount].sName << endl;

		for (int iCount2 = 0; iCount2 < 5; iCount2++)
		{
			cout << "Please enter number " << iCount2 + 1 << endl;
			cin >> objUserPass[iCount].iNumbers[iCount2];
		}

	}

}

void CalculateTotalByUser(User *objUserPass, const int *iSize)
{
	int iTotal = 0;

	for (int iCount1 = 0; iCount1 < *iSize; iCount1++)
	{
		iTotal = 0;
		cout << "Calculating the total for: " << objUserPass[iCount1].sName << endl;

		for (int iCount2 = 0; iCount2 < 5; iCount2++)
		{
			iTotal += objUserPass[iCount1].iNumbers[iCount2];
		}

		cout << "The total is: " << iTotal << endl;
	}
}

int main()
{

	const int iSize = 3;
	User objUser[iSize];

	PopulateDetails(objUser, &iSize);
	OutputDetails(objUser, &iSize);

	UpdateNumberForAllUsers(objUser, &iSize);
	CalculateTotalByUser(objUser, &iSize);

	PopulateDetails(&objUser[0]); //Calling one specific user.

	_getch();

	return 0;
}