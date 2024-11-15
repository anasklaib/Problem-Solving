#include <iostream>
#include <limits>  
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

float MonthlyInstallment(float LoanAmount, float HowManMonths)
{
    return LoanAmount / HowManMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount:");
    float HowManMonths = ReadPositiveNumber("Please enter the number of months:");
    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManMonths) << endl;
    return 0;
}
