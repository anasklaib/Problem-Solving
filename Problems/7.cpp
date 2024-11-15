#include <iostream>
#include <string>
#include <limits>  
using namespace std;

int ReadNumber() {
    int Num;
    while (true) {
        cout << "Please Enter a number?" << endl;
        cin >> Num;
        if (cin.fail()) {
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
            cout << "Invalid input. Please enter a valid number." << endl;
        } else {
            break;
        }
    }
    return Num;
}

float CalculateHalfNumber(int Num) {
    return (float)Num / 2;  }

void PrintResults(int Num) {
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << endl << Result << endl;  }

int main() {
    PrintResults(ReadNumber());  
    return 0;
}
