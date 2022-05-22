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

        void YourMarksPlease()
        {
            cout<<"Your Marks is : " << mark << endl;
        }

        void operator +=(int bonusmark)
        {
            mark = mark+bonusmark;
        }

        friend void operator -=(Marks &m, int bonusmark);

};

void operator -=(Marks &m, int bonusmark)
{
    m.mark = m.mark - bonusmark;
}

int main()
{
    Marks m1(50);

    m1 += 50;
    m1.YourMarksPlease();
    m1 -= 50;
    m1.YourMarksPlease();

    return 0;
}