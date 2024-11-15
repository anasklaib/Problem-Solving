#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Please enter a positive integer: ";
    while (!(cin >> Num) || Num <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer: ";
    }
    return Num;
}

int SumOddNumbers(int Num)
{
    int Sum = 0;
    for (int Counter = 1; Counter <= Num; Counter += 2) 
    {
        Sum += Counter;
    }
    return Sum;
}

int SumOddNumbersUsingWhile(int Num)
{
    int Sum = 0;
    int Counter = 1;
    while (Counter <= Num)
    {
        Sum += Counter;
        Counter += 2;     }
    return Sum;
}

int SumOddNumbersUsingDoWhile(int Num)
{
    int Sum = 0;
    int Counter = 1;
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
    
    int sumFor = SumOddNumbers(Num);
    int sumWhile = SumOddNumbersUsingWhile(Num);
    int sumDoWhile = SumOddNumbersUsingDoWhile(Num);

    cout << "Sum of Odd Numbers from 1 to " << Num << " using For loop: " << sumFor << endl;
    cout << "Sum of Odd Numbers from 1 to " << Num << " using While loop: " << sumWhile << endl;
    cout << "Sum of Odd Numbers from 1 to " << Num << " using Do-While loop: " << sumDoWhile << endl;

    return 0;
}
