#include <iostream>
#include <limits>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    auto readValidMark = [](int& mark) {
        while (true) {
            if (cin >> mark) {
                break; 
            }
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid integer: ";
            }
        }
        };

    cout << "Please enter your Number 1: ";
    readValidMark(Mark1);

    cout << "Please enter your Number 2: ";
    readValidMark(Mark2);

    cout << "Please enter your Number 3: ";
    readValidMark(Mark3);
}

int Sumof3Numbers(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)Sumof3Numbers(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
    /*  if (Average >= 50)
          return enPassFail::Pass;
      else
          return enPassFail::Fail;*/
    return (Average >= 50) ? enPassFail::Pass : enPassFail::Fail;
}

void PrintResults(float Average)
{
    cout << "\nThe average is: " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\nYou Passed!" << endl;
    else
        cout << "\nYou Failed!" << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadNumbers(Mark1, Mark2, Mark3);

    float average = CalculateAverage(Mark1, Mark2, Mark3);

    PrintResults(average);

    return 0;
}
