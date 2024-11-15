#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    while (true)
    {
        cout << Message << endl;
        cin >> Number;

        if (cin.fail())  
        {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a valid positive number." << endl;
        }
        else if (Number <= 0)  
        {
            cout << "The number must be positive. Please try again." << endl;
        }
        else
        {
            break;  
        }
    }
    return Number;
}


float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount: ");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment: ");
    float Months = TotalMonths(LoanAmount, MonthlyInstallment);

    cout << "\nTotal Months to pay = " << Months << " months" << endl;

    return 0;
}
