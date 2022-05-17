/* A constructor is a special method which has same name as that of the class and it has no return type.
   These r called automatically when an object of the class is created in the main function.
   In every C++ proh=gram, constructors are already created but with blank statements. We cannot create 
   constructors in private accesss specifier bcz C++ compiler will not be able to call the constructor in main()*/

#include<iostream>

using namespace std;

class HumanBeing
{
    private:
    string name;
    public:
    HumanBeing()
    {
        name="Anjali";
    }

    void display()
    {
        cout<< "I'm "<< name;
    }
    
};

int main()
{
    HumanBeing anjali;
    anjali.display();
    return 0;

}


