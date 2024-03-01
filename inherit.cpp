#include <iostream>

class Employee{
private:    
    std::string Name;
    int Age;
public:
    std::string Rank;

    void SetNameAge(std::string name, int age) { Name = name, Age = age; }
    std::string GetNameAge() { return Name; }
    
    void give_promotion()
    {
        std::cout << Name << " given_promotion" << std::endl;
    }
    void deny_promotion(){
        std::cout << Name << " denied_promotion" << std::endl;
    }

    void Promotion(){
        switch (Age)
        {
        case 30:
            give_promotion();
            break;
        
        default:
            deny_promotion();
            break;
        }
    }

    Employee(std::string rank){
        Rank = rank;
    }


};

class Developer:public Employee {
private:
    std::string Lang;
public:
    Developer(std::string rank, std::string lang): Employee(rank) {
        Lang = lang;
    }
};

int main(){
    Developer Kol = Developer("Jr", "C++");
    Kol.SetNameAge("Kol", 30);
    Kol.Promotion();


}