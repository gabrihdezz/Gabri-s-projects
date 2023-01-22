#include<iostream>
#include "Course.h"
#include <string>
using namespace std;

Course::Course(int id, string name) :
    id(id), name(name) {}

int Course::getCode(){
    return id;
}

string Course::getName(){
    return name;
}
string Course::toString() {
    return "(" + to_string(id) + ")" + name;
}

struct find_by_id {
    int id;
    find_by_id(int & id) : id(id) {}
    bool operator()(const Course & course) {
        return course.getCode() == id;
    }
};
Course::~Course()
{
    //dtor
}

