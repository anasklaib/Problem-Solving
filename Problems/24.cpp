#include <iostream>
#include <limits>  
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please enter your age between 18 and 45: \n";

    while (true) {
        cin >> Age;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid age between 18 and 45: \n";
        }
        else {
            if (ValidateNumberInRange(Age, 18, 45)) {
                return Age;  
            }
            else {
                cout << "Age must be between 18 and 45. Please try again: \n";
            }
        }
    }
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return Number >= From && Number <= To;
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is a valid age \n";
    else
        cout << Age << " is an invalid age \n";
}

int main()
{
    int age = ReadAge();
    PrintResult(age);
    return 0;
}
