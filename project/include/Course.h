#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course {
private:
    int id;
    string name;
public:
    Course(int id, string name);
    int getCode();
    string getName();
    string toString();
    virtual ~Course();


};

#endif // COURSE_H
