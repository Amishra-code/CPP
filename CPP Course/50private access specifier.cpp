#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    int age;
    int getage()
    {
        return (age-5);
    }
    
    public:
    void setAge(int value)
    {
        age = value;
    }
    void displayAge()
    {
        cout<< getage();
    }
    
};

int main()
{
    HumanBeing anjali;
    anjali.setAge(19);
    anjali.displayAge();
    return 0;

}


// private access aspecifier is used tto hide the working of certain methods.


