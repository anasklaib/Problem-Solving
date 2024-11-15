#include <iostream>
#include <string>
using namespace std;
enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    while (true)
    {
        cout << Message << endl;
        cin >> Number;

        if (cin.fail())
        {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else if (Number < From || Number > To) 
        {
            cout << "Please enter a number between " << From << " and " << To << "." << endl;
        }
        else
        {
            break; 
        }
    }
    return Number;
}enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Pleas enter day number [Sat = 1 , Sun = 2 , Mon =3 , Tue =4 , Wed =5 , Thu = 6 , Fri = 7]?", 1, 7);
}
string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Munday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not a valid Day";
	}
}
int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
}