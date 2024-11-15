#include <iostream>
#include <cmath>
#include <limits>  
using namespace std;

void CalculateAndPrintCircleArea()
{
    float A, B, C;

    while (true) {
        cout << "Please enter Triangle Side A: ";
        cin >> A;
        cout << "Please enter Triangle Base B: ";
        cin >> B;
        cout << "Please enter Triangle Side C: ";
        cin >> C;

        if (cin.fail() || A <= 0 || B <= 0 || C <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input! Please enter positive numbers for all sides.\n";
            continue;
        }

        if ((A + B > C) && (A + C > B) && (B + C > A)) {
            break;  
        }
        else {
            cout << "The sides you entered do not form a valid triangle. Please try again.\n";
        }
    }

    float P = (A + B + C) / 2;  
    float T = sqrt(P * (P - A) * (P - B) * (P - C)); 
    float r = T / P;  

    const float PI = 3.141592653589793238;

    float area = PI * pow(r, 2);  

    cout << "\nThe area of the inscribed circle is: " << area << endl;
}

int main()
{
    CalculateAndPrintCircleArea();
    return 0;
}
