#include "courseRoster.h"

CourseRoster::CourseRoster()
	:size(0)
{
	stdNames = new string[20];
}
CourseRoster::~CourseRoster()
{
	delete[] stdNames;
}
void CourseRoster::addStudent(string studentName)
{
	if (size < 20) {
		stdNames[size] = studentName;
		size++;
	}
	else {
		cout << "Course roster is full. Cannot add more students." << endl;
	}
}
void CourseRoster::print() const
{
	cout << "Course Roster" << endl;

	if (size == 0) {
		cout << "The roster is currently empty." << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << i + 1 << ". " << stdNames[i] << endl;
		}
	}
}