#include<iostream>
using namespace std;

class Marks
{
    private:
        int mark;

    public:
        Marks()
        {
            mark=0;
        }    

        Marks(int m)
        {
            mark=m;
        }
        
        void display()
        {
            cout<<"Your marks is : " << mark << endl;
        }

        Marks operator++(int n)
        {
            Marks duplicate(*this);
            mark = mark+1;
            return duplicate;
        }

        friend Marks operator--(Marks &m, int n); 

};

Marks operator--(Marks &m, int n)
{
    Marks duplicate(m);
    m.mark = m.mark - 1;
    return duplicate;
}


int main()
{
    Marks m1(100);
    
    m1.display();
    (m1++).display();
    m1.display();
    (m1--).display();
    m1.display();

    return 0;

}