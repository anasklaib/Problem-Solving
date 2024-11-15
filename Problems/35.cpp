#include <iostream>
#include <string>
using namespace std;
struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};
int ReadValidAmount(string coinType)
{
	int amount;
	while (true)
	{
		cout << "Please enter the total " << coinType << ": ";
		cin >> amount;
		if (cin.fail() || amount < 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid positive number.\n";
		}
		else
		{
			break;
		}
	}
	return amount;
}

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;
	PiggyBankContenet.Pennies = ReadValidAmount("Pennies");
	PiggyBankContenet.Nickels = ReadValidAmount("Nickels");
	PiggyBankContenet.Dimes = ReadValidAmount("Dimes");
	PiggyBankContenet.Quarters = ReadValidAmount("Quarters");
	PiggyBankContenet.Dollars = ReadValidAmount("Dollars");
	return PiggyBankContenet;
}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;
	TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 +
		PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 +
		PiggyBankContenet.Dollars * 100;
	return TotalPennies;
}
int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;
}