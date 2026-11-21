#include <iostream>
#include "student.h"
#include <cstring>

Student::Student(int age, const char* name, const char* group){
	SetAge(age);
	SetName(name);
	SetGroup(group);
}
void Student::SetName(const char* name){
	if(name == nullptr){
		std::cout << "[STUDENT ERROR] Invalid name";
		return;
	}
	if(strlen(name) + 1 > MAX_STR_LEN){
		std::cout << "[STUDENT ERROR] Name is too long! max " << MAX_STR_LEN << " symbols";
		return;
	}
	strcpy(name_, name);
}
void Student::SetGroup(const char* group_name){
	if(name == nullptr){
		std::cout << "[STUDENT ERROR] Invalid group name";
		return;
	}
	if(strlen(name) + 1 > MAX_STR_LEN){
		std::cout << "[STUDENT ERROR] Group name is too long! max " << MAX_STR_LEN << " symbols";
	}
	strcpy(group_, group_name);
}
void Student::SetAge(int age){
	if(age < 0){
		std::cout << "[STUDENT ERROR] Invalid age!";
		return;
	}
	if(age < 18){
		std::cout << "[STUDENT ERROR] This person is too young to be a student!";
		return;
	}
	age_ = age;
}

const char* Student::GetGroup() return group_;
const char* Student::GetName() return name_;
int Student::GetAge() return age_;
