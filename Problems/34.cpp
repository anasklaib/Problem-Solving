#include <iostream>
#include <limits>
using namespace std;

int ReadTotalSales()
{
    int TotalSales;
    while (true)
    {
        cout << "Please enter the Total Sales: \n";
        cin >> TotalSales;

        if (cin.fail() || TotalSales < 0)
        {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid positive number for total sales." << endl;
        }
        else
        {
            break; 
        }
    }
    return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();
    cout << endl << "Commission Percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << endl << "Total Commission = " << CalculateTotalComission(TotalSales) << endl;
}
