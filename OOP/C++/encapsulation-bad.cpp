#include <iostream>
using std::string;

class Employee {
    // Here, the end user of this class have an access to all the parameters of
    // the class directly and that is considered a bad practice in OOP.
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
    // You can directly change the parameters of the class
    employee_1.Age = 32;
    employee_1.IntroduceYourself();

    Employee employee_2 = Employee("Jowanna", "IKEA", 21);
    employee_2.Company = "Tesco";
    employee_2.IntroduceYourself();

    return 0;
}