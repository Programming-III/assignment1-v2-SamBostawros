#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person{
private:
    int yearLevel;
    string major;
public:
    Student(){
        this ->setName("No Name");
        this ->setID(-1);
        yearLevel = 0;
        major = "Unknown";
    }
    Student(string name, int id, int yearLevel, string major){
        this ->setName(name);
        this ->setID(id);
        this ->yearLevel = yearLevel;
        this ->major = major;
    }
    void display();
    ~Student(){

    }
};

#endif
