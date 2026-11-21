#pragma once
#define MAX_STR_LEN 30
class Student{
private:
	char name_[MAX_NAME_LEN] = "";
	char age_ = 0;
	char group_ = "";
public:
	Student(int age, const char* name, const char* group);
	const char* GetName();
	const char* GetGroup();
	int GetAge();

	void SetName(const char* name);
	void SetAge(int age);
	void SetGroup(const char* group_name);
};
