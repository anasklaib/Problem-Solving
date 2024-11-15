#include <iostream>
#include <string>
#include <limits>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    
        if (cin.fail() || Number <= 0)
        {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a valid positive number.\n";
        }
    } while (Number <= 0);  
    return Number;
}

float CalculateReminder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill:");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid:");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid  = " << TotalCashPaid << endl;
    cout << "*****************************\n";

    float remainder = CalculateReminder(TotalBill, TotalCashPaid);
    cout << "Remainder = " << remainder << endl;

    if (remainder < 0)
    {
        cout << "You still owe " << -remainder << " units.\n";  
    }
    else if (remainder > 0)
    {
        cout << "You have overpaid by " << remainder << " units.\n";  
    }
    else
    {
        cout << "No remainder. The amount paid matches the total bill.\n";  
    }

    return 0;
}
