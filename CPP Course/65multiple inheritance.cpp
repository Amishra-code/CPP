#include<iostream>
using namespace std;

class Father
{
    public:
        int height;
        void AskFather()
        {
            cout<<"I'm your father, ask me anything." << endl;
        }
};


class Mother
{
    public:
        int age;
        void AskMother()
        {
            cout<<"I'm your mother, ask me anything." << endl;
        }
};


class Child : public Father, public Mother
{
    public:
        void AskParents()
        {
            cout<<"I'm asking my parents, what is my age ??" << endl;
        }

        void SetAgeHeight(int iage, int iheight)
        {
            age=iage;
            height=iheight;
        }

        void display()
        {
            cout<<"My age is : " << age  << endl << "My height is : " << height << endl;
        }
};


int main()
{
    Child anjali;
    anjali.AskFather();
    anjali.AskMother();
    anjali.AskParents();
    anjali.SetAgeHeight(19, 179);
    anjali.display();

    return 0;
    
}

