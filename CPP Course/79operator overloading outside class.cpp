#include<iostream>
using namespace std;

class Marks
{
    int intmarks, extmarks;

    public:
       
       Marks()
       {
           intmarks = 0; extmarks = 0;
       }

       Marks (int im, int em)
       {
           intmarks = im; extmarks = em;
       }

       Marks operator+(Marks m)
       {
           Marks temp;
           temp.intmarks = intmarks + m.intmarks;
           temp.extmarks = extmarks + m.extmarks;
           return temp;
       }

       Marks operator-(Marks m);

       void Display()
       {
           cout<< intmarks << endl << extmarks << endl;
       }

};

Marks Marks :: operator-(Marks m)
{
    Marks temp;
    temp.intmarks = intmarks - m.intmarks;
    temp.extmarks = extmarks - m.extmarks;
    return temp;
}

int main()
{
    Marks m1(10,20), m2(30,40);
    
    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;

    m3.Display();
    m4.Display();

    return 0;

}
