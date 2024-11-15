#include <iostream>
#include <cmath>  
#include <limits> 
using namespace std;

float ReadCircumference()
{
    float L;
    cout << "Please enter the circumference L: \n";

    while (true) {
        cin >> L;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number for the circumference: \n";
        }
        else if (L <= 0) {
            cout << "The circumference must be a positive number. Please try again: \n";
        }
        else {
            break; 
        }
    }

    return L;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;
    float Area = pow(L, 2) / (PI * 4);
    return Area;
}

void PrintResults(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaByCircumference(ReadCircumference()));
    return 0;
}
