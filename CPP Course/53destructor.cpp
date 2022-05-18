#include<iostream>

using namespace std;

class HumanBeing
{
    public:
    HumanBeing()
    {
        cout<<"Constructor called" << endl;
    }
    
    ~HumanBeing()
    {
        cout<<"Destructor called" << endl;
    }

};

int main()
{
    HumanBeing *anjali;
    anjali = new HumanBeing();
    delete anjali;

    return 0;

}