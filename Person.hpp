#include <string>

struct DOB {
	int day{1};
	int month{1};
	int year{1969};
};

class Person {
private:
	std::string name;
	int age;
	DOB dob;

public:
	Person();
	Person(std::string name, int age, DOB dob);
	std::string get_name();
	int get_age();
	DOB get_dob();
};
