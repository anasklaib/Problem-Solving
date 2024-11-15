#include <iostream>
#include <string>
#include <limits>
using namespace std;

float ReadNumber(string Message)
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
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else
        {
            break; 
        }
    }
    return Number;
}

float SumNumbers()
{
    float Sum = 0, Number = 0;
    int Counter = 1;

    do
    {
        Number = ReadNumber("Please enter number " + to_string(Counter) + " (Enter -99 to stop): ");

        if (Number == -99)
            break; 

        Sum += Number;
        Counter++;
    } while (true);

    return Sum;
}

int main()
{
    cout << "Total Sum = " << SumNumbers() << endl;
    return 0;
}
