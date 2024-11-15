#include <iostream>
#include <cmath>  
#include <limits> 
using namespace std;

void ReadNumber(float& num, const string& prompt)
{
    while (true) {
        cout << prompt;
        cin >> num;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input! Please enter a valid number.\n";
        }
        else {
            break;  
        }
    }
}

void ReadTriangleData(float& A, float& B)
{
    ReadNumber(A, "Please enter Triangle Side A: ");
    ReadNumber(B, "Please enter Triangle Base B: ");
}

float CalculateHypotenuse(float A, float B)
{
    return sqrt(pow(A, 2) + pow(B, 2));  
}

float CircleAreaByTriangle(float A, float B)
{
    float C = CalculateHypotenuse(A, B);  
    float radius = (A + B - C) / 2;       
    const float PI = 3.141592653589793238;
    return PI * pow(radius, 2);    
}


void PrintResults(float Area)
{
    cout << "\nThe area of the inscribed circle is: " << Area << endl;
}

int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResults(CircleAreaByTriangle(A, B));
    return 0;
}
