#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
};

int main() {
    Employee employee_1;
    employee_1.Name = "Joe";
    employee_1.Company = "Boeznis";
    employee_1.Age = 26;
    employee_1.IntroduceYourself()

    return 0; 
}