#pragma once

#define MAX_STR_LEN 30

class Student {
private:
    char full_name_[MAX_STR_LEN] = "";
    char birth_date_[MAX_STR_LEN] = "";
    char phone_[MAX_STR_LEN] = "";
    char city_[MAX_STR_LEN] = "";
    char country_[MAX_STR_LEN] = "";
    char college_name_[MAX_STR_LEN] = "";
    char college_city_[MAX_STR_LEN] = "";
    char college_country_[MAX_STR_LEN] = "";
    char group_[MAX_STR_LEN] = "";

    void SafeCopy(char* destination, const char* source);


public:

    void InputInfo();
    void PrintInfo();

    void SetFullName(const char* name);
    void SetBirthDate(const char* date);
    void SetPhone(const char* phone);
    void SetCity(const char* city);
    void SetCountry(const char* country);
    void SetCollegeName(const char* college_name);
    void SetCollegeCity(const char* college_city);
    void SetCollegeCountry(const char* college_country);
    void SetGroup(const char* group);

    const char* GetFullName();
    const char* GetBirthDate();
    const char* GetPhone();
    const char* GetCity();
    const char* GetCountry();
    const char* GetCollegeName();
    const char* GetCollegeCity();
    const char* GetCollegeCountry();
    const char* GetGroup();
};
