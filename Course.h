#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course{
private:
    string courseCode, courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course(){
        courseCode = "Empty";
        courseName = "Unknown";
        maxStudents = 1;
        students = new Student[maxStudents];
        currentStudents = 0;
    }
    Course(string courseCode, string courseName, int maxStudents){
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->maxStudents = maxStudents;
        students = new Student[maxStudents];
        currentStudents = 0;
    }

    void addStudent(const Student& s);
    void displayCourseInfo();

    ~Course(){
        delete students;
    }
};

#endif
