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

       void Display()
       {
           cout<< intmarks << endl << extmarks;
       }

};


int main()
{
    Marks m1(10,20), m2(30,40);
    
    Marks m3 = m1 + m2;

    m3. Display();

    return 0;

}


/* m3 = m1 + m2; 
   m1 is used as an object to call the function operator, while m2 is being used to paas as a parameter.
   if operator is the member function of the class, then we will paas only one parameter;
   but if operator is the friend function to the class, then we will paas two parameters. */