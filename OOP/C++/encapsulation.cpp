#include <iostream>
using std::string;

class Employee {
private:                                                        // In C++ Private is the default setting (don't have to explicitely write)
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age > 18) {
            Age = age;    
        }
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee_1 = Employee("Joshua", "Wallmart", 27);
    employee_1.IntroduceYourself();

    Employee employee_2 = Employee("Jowanna", "IKEA", 21);
    employee_2.IntroduceYourself();

    employee_1.setAge(28);
    std::cout<<employee_1.getName()<<" is "<<employee_1.getAge()<<" years old."<<std::endl;
    return 0;
}