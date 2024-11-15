#include <iostream>
#include <string>
#include <limits> 
using namespace std;

void ReadNumber(float& num, const string& prompt)
{
    cout << prompt;
    while (!(cin >> num)) { 
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
    }
}

void ReadNumbers(float& A, float& B)
{
    ReadNumber(A, "Please Enter rectangle width A: ");
    ReadNumber(B, "Please Enter rectangle length B: ");
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B;

    ReadNumbers(A, B);

    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}
