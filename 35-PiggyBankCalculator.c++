#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct  stPiggyBankContent
{
	int penny, nickel, dime, quarter, doller;
};

stPiggyBankContent Read()
{
	stPiggyBankContent PiggyBankContent;
	cout << "Please enter a Total Pennies? " << endl;
	cin >> PiggyBankContent.penny;
	cout << "Please enter a Total Nickels? " << endl;
	cin >> PiggyBankContent.nickel;
	cout << "Please enter a Total Dimes? " << endl;
	cin >> PiggyBankContent.dime;
	cout << "Please enter a Total Quarters? " << endl;
	cin >> PiggyBankContent.quarter;
	cout << "Please enter a Total Dollars? " << endl;
	cin >> PiggyBankContent.doller;
	return PiggyBankContent;
}

int calculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int totalPennies = PiggyBankContent.penny * 1 + PiggyBankContent.nickel * 5 + PiggyBankContent.dime * 10 + PiggyBankContent.quarter * 25 + PiggyBankContent.doller * 100;
	return totalPennies;
}

int main()
{
	int totalPennies = calculateTotalPennies(Read());
	cout << endl << "total pennies = " << totalPennies << endl;
	cout << endl << "total dollars = " << (float)totalPennies / 100 << endl;
	return (0);
}
