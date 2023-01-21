#include "OfferedCourses.h"
#include "Course.h"
#include <set>
#include <algorithm>
#include <functional>

OfferedCourses::OfferedCourses()
{
    courses = set<Course>();
}

bool OfferedCourses::addCourse(Course * course) {
    return courses.insert(*course).second;
}

bool OfferedCourses::removeCourse(int id) {
    return courses.erase(getCourse(id)) != 0;
}

Course OfferedCourses::getCourse(int id) {
    set<Course>::iterator result = find_if(courses.begin(), courses.end(),
                                              find_by_id(id))
    if(result != courses.end()) {
        return *result;
    }

}

set<Course> OfferedCourses::getCourses() {
    return courses;
}

OfferedCourses::~OfferedCourses()
{
    //dtor
}
