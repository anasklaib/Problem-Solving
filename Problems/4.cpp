#include<iostream>
using namespace std;

struct stInfo {
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please Enter Your Age: ";
    cin >> Info.Age;

    cout << "Do you have a driver’s license? (1 for Yes, 0 for No): ";
    while (true) {
        cin >> Info.HasDrivingLicense;
        if (Info.HasDrivingLicense == 1 || Info.HasDrivingLicense == 0) {
            break; // Break the loop if the input is valid
        }
        else {
            cout << "Invalid input! Please enter 1 for Yes or 0 for No: ";
        }
    }

    return Info;
}

bool IsAccepted(stInfo Info) {
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info) {
    if (IsAccepted(Info)) {
        cout << "\nHired" << endl;
    }
    else {
        cout << "\nRejected" << endl;
    }
   // cout << (IsAccepted(Info)) ? "\nHired" : "\nRejected"; // You can use Ternary Operator

}

int main() {
    PrintResult(ReadInfo());
    return 0;
}
