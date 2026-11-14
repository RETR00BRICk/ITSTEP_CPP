#include <iostream>
#include "student.h"
int main(){

    Student s1;
    s1.InputInfo();
    s1.PrintInfo();

    Student s2;
    s2.SetFullName("Atolf Nicker");
    s2.SetGroup("CS-101");
    s2.SetCity("New Jersy");
    s2.SetCountry("Austria");
    
    s2.PrintInfo();

}
