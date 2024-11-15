#include <iostream>
#include <string>
#include <cmath>      
#include <limits>     
using namespace std;

float ReadRadius() {
    float R;
    cout << "Please enter radius R: ";

    while (!(cin >> R) || R <= 0) {
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a positive number for the radius: ";
    }

    return R;
}

float CircleArea(float R) {
    const float PI = 3.141592653589793238;
    return PI * pow(R, 2);
}

void PrintResults(float Area) {
    cout << "\nCircle Area = " << Area << endl;
}

int main() {

    PrintResults(CircleArea(ReadRadius()));

    return 0;
}
