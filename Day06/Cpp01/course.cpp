#include "course.h";

// 생성자
Course::Course(string nm, int ut)
	: name(nm), units(ut)
{
	roster = new CourseRoster;
}
// 소명자
Course::~Course()
{
}
// getName 함수의 정의
string Course::getName() const
{
	return name;
}
// addStudent 함수의 정의
void Course::addStudent(stirng name)
{
	roster->addStudent(name);
}
// getRoster 함수의 정의