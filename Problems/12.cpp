#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please Enter Number 1: ";
    while (!(cin >> Num1)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid integer for Number 1: ";
    }

    cout << "Please Enter Number 2: ";
    while (!(cin >> Num2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid integer for Number 2: ";
    }
}

int MaxOfNumbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResults(int Max)
{
    cout << "The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);

    PrintResults(MaxOfNumbers(Num1, Num2));

    return 0;
}
