#include "Student.h"
#include "Course.h"
#include <set>
#include <string>
#include <algorithm>
#include <functional>

Student::Student(int id, string name) : Person(id, name) {}

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

bool Student::enrollCourse(Course c) {
    return courses.insert(c).second;
}

const bool Student::unenrollCourse(int id) {
    set<Course>::iterator result = find_if(courses.begin(), courses.end(),
                                              find_by_id(id))
    if(result != courses.end()) {
        courses.erase(*result);
        return true;
    };
    else {
        return false;
    }

}

set<Course> Student::getEnrolledCourses() {
    return courses;
}

string Student::toString() {
    return to_string(id) + "-" + name;
}

struct find_by_id {
    int id;
    find_by_id(int & id) : id(id) {}
    bool operator()(const Student & student) {
        return student.getId() == id;
    }
};
Student::~Student()
{
    //dtor
}
