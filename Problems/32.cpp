#include <iostream>
#include <limits>  
using namespace std;

int ReadNumber()
{
    int Number;
    while (true)
    {
        cout << "Please enter a number: ";
        cin >> Number;

        if (cin.fail())  
        {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else
        {
            break;  
        }
    }
    return Number;
}

int ReadPower()
{
    int Power;
    while (true)
    {
        cout << "Please enter the power: ";
        cin >> Power;

        if (cin.fail())  
        {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a valid power." << endl;
        }
        else
        {
            break;  
        }
    }
    return Power;
}

double PowerOfM(int Number, int M)
{
    if (M == 0)  
        return 1;

    double result = 1;
    if (M > 0)
    {
        for (int i = 1; i <= M; i++)
        {
            result *= Number;  
        }
    }
    else
    {
        for (int i = 1; i <= -M; i++)  
        {
            result *= Number; 
        }
        result = 1.0 / result;  
    }
    return result;
}

int main()
{
    int Number = ReadNumber();
    int Power = ReadPower();

    cout << "Result = " << PowerOfM(Number, Power) << endl;

    return 0;
}
