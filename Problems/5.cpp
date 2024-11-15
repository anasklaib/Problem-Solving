#include <iostream>
using namespace std;

struct stInfo {
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please Enter Your Age: ";
    cin >> Info.Age;

    cout << "Do you have a driver's license? (1 for Yes, 0 for No): ";
    while (true) {
        cin >> Info.HasDrivingLicense;
        if (Info.HasDrivingLicense == 1 || Info.HasDrivingLicense == 0) {
            break;          }
        else {
            cout << "Invalid input! Please enter 1 for Yes or 0 for No: ";
        }
    }

    cout << "Do you have a recommendation? (1 for Yes, 0 for No): ";
    while (true) {
        cin >> Info.HasRecommendation;
        if (Info.HasRecommendation == 1 || Info.HasRecommendation == 0) {
            break;         }
        else {
            cout << "Invalid input! Please enter 1 for Yes or 0 for No: ";
        }
    }

    return Info;
}

bool IsAccepted(stInfo Info) {
    return (Info.HasRecommendation) ? true : (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info) {
    cout << (IsAccepted(Info) ? "\nHired" : "\nRejected") << endl;
}

int main() {
    PrintResult(ReadInfo());
    return 0;
}
