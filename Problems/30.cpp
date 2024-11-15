#include <iostream>
#include <limits>  
using namespace std;

int ReadPositiveNumber(const string& Message)
{
    int Number;
    while (true)
    {
        cout << Message << endl;
        cin >> Number;

        if (cin.fail() || Number <= 0)
        {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a positive integer." << endl;
        }
        else
        {
            break;  
        }
    }
    return Number;
}
int Factorial(int Num)
{
int Factorial = 1;
for (int Counter = Num; Counter >= 1; Counter--)
{
    Factorial *= Counter;
}
return Factorial;
}
int main()
{
    cout << Factorial(ReadPositiveNumber("Pleas enter a Positive Number ?")) << endl;
}