#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;                         // Abstract class has to have at least one virtual (unimplemented method)
};

class Employee:AbstractEmployee {
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

    void AskForPromotion() {
        if (Age > 30) {
            std::cout<<Name<<" got promoted "<<std::endl;
        } else {
            std::cout<<"Can't be promoted "<<std::endl;
        }
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
    employee_1.AskForPromotion();
    employee_1.setAge(31);
    employee_1.IntroduceYourself();
    employee_1.AskForPromotion();

    return 0;
}