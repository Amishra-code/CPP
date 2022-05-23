#include<iostream>
using namespace std;

class marks
{
    private:
        int mark;

    public:
        marks(int m)
        {
            mark=m;
        }  
        
        void WhatIsMarks()
        {
            cout<<"Hey, I got " << mark << " marks." << endl;
        }
        
        marks* operator->()
        {
            return this;
        }
};

int main()
{
    marks m1(50);
    
    m1.WhatIsMarks();
    m1->WhatIsMarks();

    return 0;
}