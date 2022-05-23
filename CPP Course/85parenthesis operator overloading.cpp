#include<iostream>
using namespace std;

class marks
{
    private:
        int mark;
    
    public:
        marks(int m)
        {
            cout<<"\n";
            cout<<"Constructor has been called." << endl;
            mark=m;
            cout<<"Marks is : " << mark << endl;
        }

        void display()
        {
            cout<<"\n";
            cout<<"Display function has been called." <<endl;
            cout<<"Marks is : " << mark <<  endl;
        }

        marks operator()(int m)
        {
            cout<<"\n";
            cout<<"Operator function has been called." << endl;
            mark=m;
            return *this;
        }
        
};


int main()
{
    marks m1(85);

    m1.display();
    m1(44);
    m1.display();

    return 0;
}

