#include <iostream>

class Abstraction{
    virtual void func() = 0;
};


class Employee: Abstraction{
private:
    std::string Name;
    int Age;

public:
    void setNameAge(std::string name, int age) { Name = name, Age = age; }

    void func(){
        switch (Age)
        {
        case 10 :
            std::cout << true << std::endl;
            break;
        
        default:
            std::cout << false << std::endl;
            break;
        }
    }
};

int main(){
    Employee Kol;
    Kol.setNameAge("Kol", 11);

    Kol.func();

}