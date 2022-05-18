#include<iostream>

using namespace std;

class HumanBeing
{
    public:
    static int human_count;
    
    HumanBeing()
    {
        human_count++ ;
    }

    void display()
    {
        cout<< "There are " << human_count << " people." << endl;
    }
    
};

int HumanBeing :: human_count=0;

int main()
{
    cout<< HumanBeing :: human_count << endl;

    HumanBeing anjali;
    HumanBeing aryan;
    HumanBeing suman;

    anjali.display();
    
    return 0;

}
