#include <iostream>
#include <string>
using namespace std;

string askName()  
{
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);  // Read the full name, including spaces
    return name;
}

void printName(const string& name)
{
    cout << "Your name is: " << name << endl;
}

int main()
{
    printName(askName());
    
    return 0;
}
