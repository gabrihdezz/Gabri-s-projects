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
/*
public class Course implements Comparable<Course>{

    //Variables
    private int identifier;
    private String courseName;

    /**
     * Initializes a Course by a unique id and its name.
     *
     * @param id this Course's id.
     * @param name this Course's name.
     *
    public Course(int id, String name){
        this.identifier = id;
        this.courseName = name;
    }


    /**
     * Returns this Course's id.
     *
     * @return this Course's id.
     *
    public int getCode(){
        return this.identifier;
    }

    /**
     * Returns this Course's name.
     *
     * @return this Course's name.
     *
    public String getName(){
        return this.courseName;
    }

    /**
     * Returns a string representing this Course following this format
     * (id)CourseName.
     *
     * @return a string representing this Course.
     *

    @Override
    public String toString(){
        return "("+ identifier +")"+this.courseName;
    }

    /**
     * Checks for equality between two Courses.
     *
     * @return true if both are equal, false otherwise.
     *
    @Override
    public boolean equals(Object other){
        if(other instanceof Course){
            Course o = (Course) other;
            if(this.identifier == o.identifier){
                return true;
            }
        }

        return false;
    }

    @Override
    public int compareTo(Course other){
        return Integer.compare(identifier, other.identifier);
    }

    /**
     * Generates a hash code for a determinate course.
     *
     * @return the hash code.
     *
    @Override
    public int hashCode(){
        return Objects.hash(identifier, courseName);
    }

}
*/
