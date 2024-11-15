#include <iostream>
#include <limits>  
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3) {
    while (true) {
        cout << "Please enter your Number 1: ";
        if (!(cin >> Num1)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Please enter your Number 2: ";
        if (!(cin >> Num2)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Please enter your Number 3: ";
        if (!(cin >> Num3)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number." << endl;
            continue;
        }
        break;
    }
}

int Sumof3Numbers(int Num1, int Num2, int Num3) {
    return Num1 + Num2 + Num3; 
}

void PrintResults(int Total) {
    cout << "\nThe total sum of numbers is: " << Total << endl;
}

int main() {
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(Sumof3Numbers(Num1, Num2, Num3));
    return 0;
}
