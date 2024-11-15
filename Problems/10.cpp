#include <iostream>
#include <limits> 

using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3) {
    while (true) {
        cout << "Please enter your Number 1: ";
        if (cin >> Mark1) {
            break;  
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }

    while (true) {
        cout << "Please enter your Number 2: ";
        if (cin >> Mark2) {
            break; 
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }

    while (true) {
        cout << "Please enter your Number 3: ";
        if (cin >> Mark3) {
            break;          }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }
}

int Sumof3Numbers(int Mark1, int Mark2, int Mark3) {
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {
    return (float)Sumof3Numbers(Mark1, Mark2, Mark3) / 3;  
}

void PrintResults(float Average) {
    cout << "\nThe average is: " << Average << endl;
}

int main() {
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);  
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3)); 
    return 0;
}
