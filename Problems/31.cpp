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
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
        else
        {
            break;  
        }
    }
    return Number;
}

void PrintPowersOfNumber(int Number)
{
    int A = Number * Number;
    int B = Number * Number * Number;
    int C = Number * Number * Number * Number;

    cout << "The number " << Number << " raised to the powers of 2, 3, and 4 are:\n";
    cout << "2nd Power: " << A << "\n";
    cout << "3rd Power: " << B << "\n";
    cout << "4th Power: " << C << endl;
}

int main()
{
    int Number = ReadNumber();
    PrintPowersOfNumber(Number);
    return 0;
}
