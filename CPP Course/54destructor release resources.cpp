#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    string *name;
    int *age;

    public:
    HumanBeing(string iname, int iage)
    {
        cout<<endl << "constructor is building memory for name and age" << endl;
        name=new string;
        age = new int;

        *name = iname;
        *age = iage;
    }

    void display()
    {
        cout<< *name<< endl<< *age << endl << endl;
    }

    ~HumanBeing()
    {
        delete name;
        delete age;
    }
    
};

int main()
{
    HumanBeing *anjali = new HumanBeing("anjali", 19);
    anjali->display();

    return 0;

}
