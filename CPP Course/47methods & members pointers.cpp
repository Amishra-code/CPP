#include<iostream>

using namespace std;

class HumanBeing
{
    public:
    string name;
    void display()
    {
        cout<<"I'm "<< name;
    }
};

int main()
{
    HumanBeing  *anjali = new HumanBeing();
    anjali->name="Anjali";
    anjali->display();

    return 0;

}