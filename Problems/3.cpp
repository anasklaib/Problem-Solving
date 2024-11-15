#include<iostream>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

enNumberType CheckNumberType(int number) {
    return (number % 2 == 0) ? enNumberType::Even : enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType) {
    if (numberType == enNumberType::Even) {
        cout << "\nThe number is Even.\n";
    }
    else {
        cout << "\nThe number is Odd.\n";
    }
}

int main() {
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
