#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
};

int main() {
    Employee employee_1 = Employee("Joshua", "Wallmart", 27);
    employee_1.IntroduceYourself();

    Employee employee_2 = Employee("Jowanna", "IKEA", 21);
    employee_2.IntroduceYourself();

    return 0;
}