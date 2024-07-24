#include <iostream>
#include "Person.hpp"

Person::Person(): name("John Doe"), age(42) {printf("I am created\n");}

Person::Person(std::string name, int age): name(name), age(age) {printf("I am created\n");}

std::string Person::get_name() {return this->name;}

int Person::get_age() {return this->age;}
