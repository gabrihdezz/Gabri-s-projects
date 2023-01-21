#include "Person.h"

Person::Person(int id, string name) :
    id(id), name(name){}

string Person::getName(){
    return name;
}
Person::~Person()
{
    //dtor
}
