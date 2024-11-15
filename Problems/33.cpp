#include <iostream>
#include <limits>
using namespace std;

int ReadNumberInRange(int Form, int To)
{
    int Grade;
    while (true)
    {
        cout << "Please enter a grade between " << Form << " and " << To << ": ";
        cin >> Grade;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else if (Grade < Form || Grade > To)
        {
            cout << "Grade must be between " << Form << " and " << To << ". Please try again." << endl;
        }
        else
        {
            break;
        }
    }
    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    int grade = ReadNumberInRange(0, 100);
    cout << "The grade letter is: " << GetGradeLetter(grade) << endl;
    return 0;
}
