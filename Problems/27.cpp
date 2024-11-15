#include <iostream>
#include <limits> 
using namespace std;

int ReadNumber() {
    int Num;
    cout << "Please enter your Number ? \n";
    while (true) {
        cin >> Num;

        if (cin.fail() || Num <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a positive number: \n";
        }
        else {
            break;
        }
    }
    return Num;
}

void PrintRangeFrom1toNum_UsingFor(int Num) {
    cout << "Range printed using For Statement: \n";
    for (int Counter = Num; Counter >= 1; Counter--) {
        cout << Counter << endl;
    }
}

void PrintRangeFrom1toNum_UsingWhile(int Num) {
    int Counter = Num+1;
    cout << "Range printed using While Statement: \n";
    while (Counter > 1 ) {
        Counter--;
        cout << Counter << endl;
    }
}

void PrintRangeFrom1toNum_UsingDoWhile(int Num) {
    int Counter = Num+1;
    cout << "Range printed using Do While Statement: \n";
    do {
        Counter--;
        cout << Counter << endl;
    } while (Counter > 0);
}

int main() {
    int Num = ReadNumber();

    PrintRangeFrom1toNum_UsingFor(Num);
    PrintRangeFrom1toNum_UsingWhile(Num);
    PrintRangeFrom1toNum_UsingDoWhile(Num);

    return 0;
}
