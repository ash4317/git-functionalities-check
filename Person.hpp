#include <string>

class Person {
private:
	std::string name;
	int age;

public:
	Person();
	Person(std::string name, int age);
	std::string get_name();
	int get_age();
};
