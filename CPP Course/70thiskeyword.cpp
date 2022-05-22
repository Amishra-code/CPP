#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    int age;
    public:
    void setAge(int age)
    {
        this->age = age;
    }
    void displayAge()
    {
        cout<< this->age;
    }
    
};

int main()
{
    HumanBeing anjali;
    anjali.setAge(19);
    anjali.displayAge();
    return 0;

}

