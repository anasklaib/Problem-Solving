#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {
    int Mark;
    while (true) {
        cout << "Please Enter your mark (0-100):" << endl;
        cin >> Mark;

        if (cin.fail() || Mark < 0 || Mark > 100) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a mark between 0 and 100." << endl;
        }
        else {
            break;
        }
    }
    return Mark;
}

enPassFail CheckMark(int Mark) {
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(int Mark) {
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\nYou Passed" << endl;
    else
        cout << "\nYou Failed" << endl;
}

int main() {
    PrintResults(ReadMark());
    return 0;
}
