#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor : public Person{
private:
    string department;
    int experienceYears;
public:
    Instructor(){
        this ->setName("No Name");
        this ->setID(-1);
        department = "Unknown";
        experienceYears = -1;
    }
    Instructor(string name, int id, string department, int experienceYears){
        this ->setName(name);
        this ->setID(id);
        this ->department = department;
        this ->experienceYears = experienceYears;
    }
    void display();
    ~Instructor(){

    }
};

#endif
