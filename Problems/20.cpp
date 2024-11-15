#include <iostream>
#include <cmath> 
#include <limits> 
using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Please enter the side length of the square A: \n";

    while (true) {
        cin >> A;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number for the side length: \n";
        }
        else if (A <= 0) {
            cout << "The side length must be positive. Please try again: \n";
        }
        else {
            break; 
        }
    }

    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(A, 2)) / 4;
    return Area;
}

void PrintResults(float Area)
{
    cout << "\nThe area of the circle inscribed in the square is: " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}
