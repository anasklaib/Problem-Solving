#include <iostream>
#include <string>
#include <limits>
using namespace std;

enum enOperationType {
    Add = '+', Subtract = '-', Multiply = '*', Divide = '/'
};

float ReadNumber(string Message) {
    float Number = 0;
    while (true) {
        cout << Message << endl;
        cin >> Number;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else {
            break;
        }
    }
    return Number;
}

enOperationType ReadType() {
    char OT;
    while (true) {
        cout << "Please enter Operation Type ( + , - , * , / ): ";
        cin >> OT;
        if (OT == '+' || OT == '-' || OT == '*' || OT == '/') {
            return (enOperationType)OT;
        }
        else {
            cout << "Invalid operation type. Please enter one of +, -, *, /." << endl;
        }
    }
}

float Calculate(float Number1, float Number2, enOperationType OpType) {
    switch (OpType) {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        if (Number2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return numeric_limits<float>::quiet_NaN(); 
        }
        return Number1 / Number2;
    default:
        return Number1 + Number2; 
    }
}

int main() {
    float Number1 = ReadNumber("Please enter the first number: ");
    float Number2 = ReadNumber("Please enter the second number: ");
    enOperationType OpType = ReadType();

    float result = Calculate(Number1, Number2, OpType);
    if (!isnan(result)) {  
        cout << endl << "Result = " << result << endl;
    }
    return 0;
}
