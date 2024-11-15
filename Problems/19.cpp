#include <iostream>
#include <cmath>     
#include <limits>     
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Please enter the diameter D: \n";

    while (!(cin >> D) || D <= 0) {
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "Invalid input. Please enter a valid positive diameter: \n";
    }

    return D;
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;
    return (PI * pow(D, 2)) / 4;
}

void PrintResults(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}
