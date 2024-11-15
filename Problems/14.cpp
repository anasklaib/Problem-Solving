#include <iostream>
#include <limits> 
using namespace std;


void ReadNumber(int& num, const string& prompt)
{
    cout << prompt;
    while (!(cin >> num)) { 
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a valid number: ";
    }
}

void ReadNumbers(int& Num1, int& Num2)
{
    ReadNumber(Num1, "Please enter Number A: ");
    ReadNumber(Num2, "Please enter Number B: ");
}

void Swap(int& A, int& B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
    cout << "\nNumber 1 = " << Num1 << endl;
    cout << "Number 2 = " << Num2 << endl;
}

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);

    cout << "Before swap:" << endl;
    PrintNumbers(Num1, Num2);

    Swap(Num1, Num2);

    cout << "\nAfter swap:" << endl;
    PrintNumbers(Num1, Num2);

    return 0;
}
