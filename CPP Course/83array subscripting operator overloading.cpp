#include<iostream>
using namespace std;

class array
{
    private:
        int subject[3];

    public:
        array(int sub1, int sub2, int sub3)
        {
            subject[0]=sub1;
            subject[1]=sub2;
            subject[2]=sub3;
        }     

        int operator[](int position)
        {
            return subject[position];
        }

};

int main()
{
    array a(20, 25, 30);

    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;

    return 0;

}


// [], ->, () these operators can never be overlaoded with the help of friend function or static member function.