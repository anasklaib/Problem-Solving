#include <iostream>
#include <limits> 
using namespace std;

int ReadAge()
{
    int Age = 0;
    cout << "Please enter your age between 18 and 45: \n";

    while (true) {
        cin >> Age;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid integer age between 18 and 45: \n";
        }
        else {
            return Age;  
        }
    }
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return Number >= From && Number <= To;
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    do {
        Age = ReadAge();  
        if (!ValidateNumberInRange(Age, From, To)) {
            cout << "Age must be between " << From << " and " << To << ". Please try again.\n";
        }
    } while (!ValidateNumberInRange(Age, From, To)); 
    return Age;
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45)) {
        cout << Age << " is a valid age.\n";
    }
    else {
        cout << Age << " is an invalid age.\n";
    }
}

int main()
{
    int validAge = ReadUntilAgeBetween(18, 45);  
    PrintResult(validAge);  
    return 0;
}
