#include <iostream>

class Init{
    public:
        std::string Name;
        std::string Description;
        int NumArgs;
    void print(){
        std::cout << Name << std::endl;
        std::cout << Description << std::endl;
        std::cout << NumArgs << std::endl;
    }
    Init(std::string name,std::string description, int numArgs){
        Name = name;
        Description = description;
        NumArgs = numArgs;
    }

};
int main(){
    Init kol = Init("Kol", "kolons", 2);
    kol.print();
}


