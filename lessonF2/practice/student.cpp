
#include "student.h"
#include <iostream>
#include <cstring>


void Student::SafeCopy(char* destination, const char* source) {
    if (strlen(source) >= MAX_STR_LEN) {
        std::cout << "[Error] String exceeds maximum length!\n";
        return;
    }
    strcpy(destination, source);
}

void Student::SetFullName(const char* name) {
    SafeCopy(full_name_, name);
}

void Student::SetBirthDate(const char* date) {
    SafeCopy(birth_date_, date);
}

void Student::SetPhone(const char* phone) {
    SafeCopy(phone_, phone);
}

void Student::SetCity(const char* city) {
    SafeCopy(city_, city);
}

void Student::SetCountry(const char* country) {
    SafeCopy(country_, country);
}

void Student::SetCollegeName(const char* college_name) {
    SafeCopy(college_name_, college_name);
}

void Student::SetCollegeCity(const char* college_city) {
    SafeCopy(college_city_, college_city);
}

void Student::SetCollegeCountry(const char* college_country) {
    SafeCopy(college_country_, college_country);
}

void Student::SetGroup(const char* group) {
    SafeCopy(group_, group);
}


const char* Student::GetFullName(){
    return full_name_;
}

const char* Student::GetBirthDate(){
    return birth_date_;
}

const char* Student::GetPhone(){
    return phone_;
}

const char* Student::GetCity(){
    return city_;
}

const char* Student::GetCountry(){
    return country_;
}

const char* Student::GetCollegeName(){
    return college_name_;
}

const char* Student::GetCollegeCity(){
    return college_city_;
}

const char* Student::GetCollegeCountry(){
    return college_country_;
}

const char* Student::GetGroup(){
    return group_;
}


void Student::InputInfo() {
    std::cout << "ENTER STUDENT INFO:\n";

    std::cout << "Enter Full Name: ";
    std::cin.getline(full_name_, MAX_STR_LEN);

    std::cout << "Enter Birth Date (e.g. DD.MM.YYYY): ";
    std::cin.getline(birth_date_, MAX_STR_LEN);

    std::cout << "Enter Contact Phone: ";
    std::cin.getline(phone_, MAX_STR_LEN);

    std::cout << "Enter City: ";
    std::cin.getline(city_, MAX_STR_LEN);

    std::cout << "Enter Country: ";
    std::cin.getline(country_, MAX_STR_LEN);

    std::cout << "Enter College Name: ";
    std::cin.getline(college_name_, MAX_STR_LEN);

    std::cout << "Enter College City: ";
    std::cin.getline(college_city_, MAX_STR_LEN);

    std::cout << "Enter College Country: ";
    std::cin.getline(college_country_, MAX_STR_LEN);

    std::cout << "Enter Group Number: ";
    std::cin.getline(group_, MAX_STR_LEN);

}

void Student::PrintInfo(){
    std::cout << "\nSTUDENT INFO: \n";
    std::cout << "Full Name:        " << full_name_ << "\n";
    std::cout << "Birth Date:       " << birth_date_ << "\n";
    std::cout << "Contact Phone:    " << phone_ << "\n";
    std::cout << "Location:         " << city_ << ", " << country_ << "\n";
    std::cout << "College:          " << college_name_ << "\n";
    std::cout << "College Location: " << college_city_ << ", " << college_country_ << "\n";
    std::cout << "Group:            " << group_ << "\n";
    std::cout << "---";
}
