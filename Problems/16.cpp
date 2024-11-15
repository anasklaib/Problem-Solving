#include <iostream>
#include <string>
#include <cmath> 
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
void ReadNumbers(float& A, float& D)
{
    ReadNumber(A, "Please enter rectangle Side A: ");
    ReadNumber(D, "Please enter rectangle Diagonal D: ");
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    float B = sqrt(pow(D, 2) - pow(A, 2));

    float Area = A * B;
    return Area;
}

void PrintResults(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, D;

    ReadNumbers(A, D);

    PrintResults(RectangleAreaBySideAndDiagonal(A, D));

    return 0;
}
