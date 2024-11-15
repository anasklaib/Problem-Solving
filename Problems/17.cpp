#include <iostream>
#include <limits>
using namespace std;

void ReadPositiveNumber(float& number, const string& prompt)
{
    while (true) {
        cout << prompt;
        if (cin >> number && number > 0) {
            break; 
        }
        else {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a valid positive number." << endl;
        }
    }
}

void ReadNumbers(float& A, float& H)
{
    ReadPositiveNumber(A, "Please enter triangle base A: ");
    ReadPositiveNumber(H, "Please enter triangle height H: ");
}

float TriangleArea(float A, float H)
{
    return (A * H) / 2;
}

void PrintResults(float Area)
{
    cout << "\nTriangle Area = " << Area << endl;
}

int main()
{
    float A, H;
    ReadNumbers(A, H);  
    float Area = TriangleArea(A, H);  
    PrintResults(Area);  
    return 0;
}
