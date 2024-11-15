#include <iostream>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please Enter Your First Name: " ;
    cin >> Info.FirstName;

    cout << "Please Enter Your Last Name: " ;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info) {
    string FullName = "";

    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string FullName) {
    cout << "\nYour full name is: " << FullName ;
}

int main() {
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}
