#include <iostream>
#include "Person.hpp"

Person::Person(): name("John Doe"), age(42), dob(DOB{}) {printf("I am created\n");}

Person::Person(std::string name, int age, DOB dob): name(name), age(age), dob(dob) {printf("I am created\n");}

std::string Person::get_name() {return this->name;}

int Person::get_age() {return this->age;}

DOB Person::get_dob() {return this->dob;}