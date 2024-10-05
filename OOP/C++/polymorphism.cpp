#include <iostream>
using std::string;

// Defines an "interface" (if it only contains virtual methods) for Employee
// class. It acts as a contract that have to be fullfiled (defines methods that
// has to be implemented) when creating a real class defined by this interface.
class AbstractEmployee {
    virtual void askForPromotion() = 0;                         // Abstract class has to have at least one virtual (unimplemented method)
    virtual void work() = 0;
};

// Employee class created using abstract class or interface that requires specific
// methods to be implemented within this class
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

    void introduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    void askForPromotion() {
        if (Age > 30) {
            std::cout<<Name<<" got promoted "<<std::endl;
        } else {
            std::cout<<"Can't be promoted "<<std::endl;
        }
    }

    // If you add the virtual keyword before the function definition
    // the compiler will look up for the work() implementation within 
    // the child classes and if it finds any, it will run them instead
    // of this method
    virtual void work() {
        std::cout<<Name<<" is working for "<<Company<<std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

// Developer class inherits from Employee
// This inheritance is public so the Developer instance
// have access to all the methods of Employee. By default
// this is not the case (without the public keyword you can' 
// access the Employee class methods)
class Developer: public Employee {
public:
    string FavoritProgLanguage;

    // Define a new constructor for the child class, because it has one more parameter
    // in compoarison to its parent class. Three parameters are passed into the constructor 
    // from the parent class and the rest is passed into the child constructor
    Developer(string name, string company, int age, string favoritProgLanguage) 
        :Employee(name, company, age) {
            FavoritProgLanguage = favoritProgLanguage;
    }

    void setFavProgLanguage(string fav_lang) {
        FavoritProgLanguage = fav_lang;
    }
    string getFavProgLanguage() {
        return FavoritProgLanguage;
    }

    // We are over writing the work method from the parent class (Poly Morpishm)
    void work() override {
        std::cout<<getName()<<" is writing code in "<<FavoritProgLanguage<<std::endl;
    }

    void bugFix() {
        std::cout<<getName()<<" fixed bug for "<<getCompany()<< " using "<<getFavProgLanguage()<<std::endl;
    }
};


// Manager class inherits from Employee
// This inheritance is public so the Manager instance
// have access to all the methods of Employee. By default
// this is not the case (without the public keyword you can't 
// access the Employee class methods)
class Manager: public Employee {
public:
    string Department;
    
    Manager(string name, string company, int age, string department)
        :Employee(name, company, age) {
            Department = department;
    }

    void prepareReview() {
        std::cout<<getName()<<" is preparing review for "<<Department<<" department"<<std::endl;
    }

    // We are over writing the work method from the parent class (Poly Morpishm)
    void work() override {
        std::cout<<getName()<<" is writing documents and checking the team"<<std::endl;
    }
};

int main() {
    Developer dev = Developer("Joshua", "Lidl", 38, "C++");
    dev.work();
    dev.bugFix();

    Manager man = Manager("Vincente", "La Casa", 45, "Music");
    man.work();
    man.prepareReview();

    Employee* dev_ptr = &dev;
    Employee* man_ptr = &man;

    dev_ptr -> work();
    man_ptr -> work();

    return 0;
}