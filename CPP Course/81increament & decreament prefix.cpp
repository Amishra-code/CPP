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

        void operator++()
        {
            mark = mark+1;
        }

        friend Marks operator--(Marks &m); 

};

Marks operator--(Marks &m)
{
    m.mark = m.mark - 1;
    return m;
}


int main()
{
    Marks m1(100);

    ++m1;
    m1.display();

    --m1;
    m1.display();
   
    return 0;

}