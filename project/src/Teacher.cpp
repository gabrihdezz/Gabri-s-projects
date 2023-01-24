#include "Teacher.h"
#include "Person.h"
#include <algorithm>

Teacher::Teacher(int id, string name) : Person(id, name) {}

int Teacher::getId() {
    return id;
}

string Teacher::getName() {
    return name;
}

bool Teacher::enrollCourse(Course c) {
    return courses.insert(c).second;
}

const bool Teacher::unenrollCourse(int id) {
    set<Course>::iterator result = find_if(courses.begin(), courses.end(),
                                              find_by_id(id))
    if(result != courses.end()) {
        courses.erase(*result);
        return true;
    } else {
        return false;
    }

}

set<Course> Teacher::getEnrolledCourses() {
    return courses;
}

string Teacher::toString() {
    return to_string(id) + "-" + name;

}

struct find_by_id {
    int id;
    find_by_id(int & id) : id(id) {}
    bool operator()(const Teacher & teacher) {
        return teacher.getId() == id;
    }
};
Teacher::~Teacher()
{
    //dtor
}
