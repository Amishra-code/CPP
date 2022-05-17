#include<iostream>

using namespace std;

class HumanBeing
{
    public:
    string name;
    // string name = "Anjali";  {no error}
    void display();
};

// string HumanBeing :: name = "Anjali" ;  {error}
void HumanBeing :: display()
{
    cout<<"I'm "<< HumanBeing :: name;
}

int main()
{
    HumanBeing  *anjali = new HumanBeing();
    anjali->name="Anjali";
    anjali->display();

    return 0;

}