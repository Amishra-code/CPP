#include<iostream>

using namespace std;

class HumanBeing
{
    private:
        string name;
        int age;
    
    public:
        HumanBeing(string iname, int iage)
        {
            name=iname;
            age=iage;
        }

        friend void display(HumanBeing man);
    
};

void display(HumanBeing man)
{
    cout<< man.name << endl << man.age;
}
    
int main()
{
    HumanBeing aryan("aryan", 19);
    display(aryan);
    return 0;

}

/* friend member function is declared inside the class but it's definition is outside 
friend function is useful in accessing the members of that class */

