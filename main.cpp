#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

void Person::display() {
    cout << "Name: " << name << "   ID: " << id << endl;
}

void Student::display() {
    cout << "Student Info: " << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Year: " << yearLevel << endl << "Major: " << major << endl;
}

void Instructor::display() {
    cout << "Instructor Info: " << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Department: " << department << endl << "Experience: " << experienceYears << " years" << endl;
}

void Course::addStudent(const Student &s) {
    if(currentStudents == maxStudents){
        cout << "There course is at full capacity. Cannot add the student." << endl;
        return;
    }
    students[currentStudents] = s;
    currentStudents++;
}

void Course::displayCourseInfo() {
    cout << "Course: " << courseCode << " - " << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;
    if(currentStudents > 0) {
        cout << "Currently Enrolled: ";
        for (int i = 0; i < currentStudents; i++){
            cout << students[i].getName() << "(ID: " << students[i].getID() << ")";
            if(i != currentStudents - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else{
        cout << "No students are currently enrolled in the course." << endl;
    }
}

int main(){
    Course c("CS101", "Introduction to Programming", 3);
    Student s("Omar Nabil", 2202, 2, "Informatics");
    c.addStudent(s);
    Instructor i("Dr. Lina Khaled", 1000, "Computer Science", 5);

    c.displayCourseInfo();
    i.display();
    s.display();

    return 0;
}
