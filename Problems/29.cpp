#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Please enter a positive number: ";
    while (!(cin >> Num) || Num <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive number: ";
    }
    return Num;
}

int SumEvenFrom1toNum_UsingFor(int Num)
{
    int Sum = 0;
    cout << "Sum of Even Numbers using For loop: \n"
    for (int Counter = 2; Counter <= Num; Counter += 2)  
    {
        Sum += Counter;
    }
    return Sum;
}

int SumEvenFrom1toNum_UsingWhile(int Num)
{
    int Sum = 0;
    int Counter = 2;  // Start from 2 to avoid checking every number
    cout << "Sum of Even Numbers using While loop: \n";
    while (Counter <= Num)
    {
        Sum += Counter;
        Counter += 2;  // Only consider even numbers
    }
    return Sum;
}

int SumEvenFrom1toNum_UsingDoWhile(int Num)
{
    int Sum = 0;
    int Counter = 2;  // Start from 2 for even numbers
    cout << "Sum of Even Numbers using Do-While loop: \n";
    do
    {
        Sum += Counter;
        Counter += 2;  
    } while (Counter <= Num);
    return Sum;
}

int main()
{
    int Num = ReadNumber();
    
    cout << "Sum of Even Numbers from 1 to " << Num << " using For loop: " << SumEvenFrom1toNum_UsingFor(Num) << endl;
    cout << "Sum of Even Numbers from 1 to " << Num << " using While loop: " << SumEvenFrom1toNum_UsingWhile(Num) << endl;
    cout << "Sum of Even Numbers from 1 to " << Num << " using Do-While loop: " << SumEvenFrom1toNum_UsingDoWhile(Num) << endl;

    return 0;
}
