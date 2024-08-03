#include <iostream>
#include "Person.hpp"

int main() {
	Person p("Ashwin", 24, {24, 8, 1999});
	DOB d = p.get_dob();
	printf("Name: %s, Age: %d, DOB: %d %d %d\n", p.get_name().c_str(), p.get_age(), d.day, d.month, d.year);
	return 0;
}
