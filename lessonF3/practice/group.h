#pragma once
#include "student.h"
class Group{
private:
	char name[MAX_STR_LEN] = "";
	Student* students_ = nullptr;
	int student_count_ = 0;
public:
	Group();
	void AddStudent(const Student& student);
	void RemoveStudent(int index);
	void ShowStudentInfo(int index);
	void ShowAllStudentsInfo();
};
