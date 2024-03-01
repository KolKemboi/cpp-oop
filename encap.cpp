#include <iostream>

class Encap{
    private:
        std::string Name;
        int Age;
    public:
        char Att;

    public:
        void setName(std::string name) { Name = name; };
        void setAge(int age) { Age = age; };

        std::string getName(){return Name; };
        int getAge(){return Age; };

        void show(){std::cout<<Att<<std::endl; };

    Encap(char a){
        Att = a;
    }
};

int main(){
    Encap cap = Encap('a');
    
    cap.setName("Encap");
    cap.setAge(0);

    std::cout << cap.getAge() << std::endl;
    std::cout << cap.getName() << std::endl;
    cap.show();

    


}