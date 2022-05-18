#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    string name;
    int age;

    public:
    HumanBeing()
    {
        cout<<"default constructor"<< endl;
        name="no name"; 
        age = 0;
    }

    HumanBeing(string iname)
    {
        cout<<"name constructor"<< endl;
        name=iname;
        age = 0;
    }

    HumanBeing(int iage)
    {
        cout<<"age constructor"<< endl;
        name="No name";
        age = iage;
    }
    
    HumanBeing(string iname, int iage)
    {
        cout<<"name and age constructor"<< endl;
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
    HumanBeing anjali;
    anjali.display();

    HumanBeing aryan("aryan");
    aryan.display();

    HumanBeing suman(45);
    suman.display();

    HumanBeing deeksha("deeksha", 27);
    deeksha.display();

    return 0;

}
