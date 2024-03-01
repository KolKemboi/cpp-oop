#include <iostream>

class Abstract{
    virtual void Promote() = 0;
};

class Employee{

protected:
    std::string Name;
    std::string Work;
    int Age;
    char Gender;
public:
    void InfoSetter(std::string name, std::string work, int age, char gender) {
        Name = name;
        Work = work;
        Age = age;
        Gender = gender;
    }
    void InfoPrinter(){
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Work: " << Work << std::endl;
        std::cout << "Age: " << Age << std::endl;
        std::cout << "Gender: " << Gender << std::endl;
    }
    void GivePromotion(){
        std::cout << "Promotion given to: " << Name << std::endl;
    }
    void DenyPromotion(){
        std::cout << "Promotion denied to: " << Name << std::endl;
    }
    void Promote(){
        if ( Age > 30 ){
            GivePromotion();
        }else{
            DenyPromotion();
        }
    }
    virtual void Working(){
        std::cout << Name << " is Working on work" << std::endl;
    }
};

class Developer: public Employee{
private:
    std::string Lang;

public:
    Developer(std::string lang)
    {
        Lang = lang;
    }
    void Working(){
        std::cout << Name << " is Working on " << Lang << std::endl;
    }

};

class Teacher: public Employee{
private:
    std::string Subject;

public:
    Teacher(std::string subject)
    {
        Subject = subject;
    }
    void Working(){
        std::cout << Name << " is Working on " << Subject << std::endl;
    }

};
int main(){
    Developer Kol = Developer("C++");
    Teacher Dammie = Teacher("Architecture");

    Kol.InfoSetter("Kol", "Dev", 30, 'M');
    Dammie.InfoSetter("Dammie", "Teacher", 20, 'F');

    Kol.InfoPrinter();
    Dammie.InfoPrinter();

    Employee* e_1 = &Kol;
    Employee* e_2 = &Dammie;

    e_1->Working();
    e_2->Working();
    
}