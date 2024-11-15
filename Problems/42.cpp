#include <iostream>
#include <string>
using namespace std;
struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
float ReadPositiveNumber(string Message) {
	float Number = 0;
	while (true) {
		cout << Message << endl;
		cin >> Number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid number." << endl;
		}
		else {
			break;
		}
	}
	return Number;
}
strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Pleas Enter Number Of Days ? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Pleas Enter Number Of Hours ? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Pleas Enter Number Of Minutes ? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Pleas Enter Number Of Seconds ? ");
	return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;
	return DurationInSeconds;
}
int main()
{
	cout << endl << "Task Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
}