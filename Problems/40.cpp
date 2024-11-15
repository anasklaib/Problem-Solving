#include <iostream>
#include <iomanip> 
#include <string>
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
            cout << "Invalid input. Please enter a valid positive number." << endl;
        }
    } while (Number <= 0);
    return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill *= 1.1;  
    TotalBill *= 1.16; 
    return TotalBill;
}

void PrintTotalBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill:");
    float FinalBill = TotalBillAfterServiceAndTax(TotalBill);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << FinalBill << endl;
}

int main()
{
    PrintTotalBillAfterServiceAndTax();
    return 0;
}
