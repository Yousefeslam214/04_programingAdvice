#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct  stSimpleCalculator
{
	int penny, nickel, dime, quarter, doller;
};

stSimpleCalculator Read()
{
	stSimpleCalculator PiggyBankContent;
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

int calculate(stSimpleCalculator PiggyBankContent)
{
    int totalPennies = PiggyBankCont....ent.penny * 1 + PiggyBankContent.nickel * 5 + PiggyBankContent.dime * 10 + PiggyBankContent.quarter * 25 + PiggyBankContent.doller * 100;
	return totalPennies;
}

int main()
{  
	int totalPennies = calculate(Read());
	cout << endl << "total pennies = " << totalPennies << endl;
	cout << endl << "total dollars = " << (float)totalPennies / 100 << endl;
	return (0);
}
