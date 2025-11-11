#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{
private:
    string name;
    int id;
protected:
    string getName(){
        return this -> name;
    }
    void setName(string name){
        this -> name = name;
    }
    void setID(int id){
        this -> id = id;
    }
public:
    Person(){
        name = "No Name";
        id = -1;
    }
    Person(string name, int id){
        this -> name = name;
        this -> id = id;
    }
    void display();
    ~Person(){

    }
};


#endif
