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

    static void HumanCount()
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

    HumanBeing :: HumanCount();
    HumanBeing :: HumanCount();
    cout<< HumanBeing :: human_count<< endl;
    
    return 0;

}

/* Static member functions are the one which starts with keyword "static" 
and these methods can only use members or variables which are static.
These fuctions are called by using classname followed by scope resolution operator 
and the function name. No matter how many objects we create, only one copy will exist */
