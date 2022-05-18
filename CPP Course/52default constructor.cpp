#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    string name;
    int age;

    public:
    HumanBeing(string iname = "no name", int iage = 0)
    {
        cout<<"overloaded constructor"<< endl;
        name=iname;
        age = iage;
    }


    void display()
    {
        cout<< name<< endl<< age << endl << endl;
    }
    
};

int main()
{
    HumanBeing anjali("anjali" , 19);
    anjali.display();

    HumanBeing aryan("aryan");
    aryan.display();

    HumanBeing suman;
    suman.display();

    return 0;

}
