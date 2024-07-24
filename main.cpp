#include <iostream>
#include "Person.hpp"

int main() {
	Person p("Ashwin", 24);
	std::cout << p.get_name() << std::endl << p.get_age() << std::endl;
	return 0;
}
