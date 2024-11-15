#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& A, int& B, int& C)
{
    cout << "Please Enter Number 1: ";
    while (!(cin >> A)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a valid integer for Number 1: ";
    }

    cout << "Please Enter Number 2: ";
    while (!(cin >> B)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a valid integer for Number 2: ";
    }

    cout << "Please Enter Number 3: ";
    while (!(cin >> C)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a valid integer for Number 3: ";
    }
}

int MaxOf3Numbers(int A, int B, int C)
{
    if (A >= B && A >= C)  
        return A;
    else if (B >= A && B >= C)  
        return B;
    else  
        return C;
}

void PrintResults(int Max)
{
    cout << "The Maximum Number is: " << Max << endl;
}

int main()
{
    int A, B, C;

    ReadNumbers(A, B, C);

    PrintResults(MaxOf3Numbers(A, B, C));

    return 0;
}
