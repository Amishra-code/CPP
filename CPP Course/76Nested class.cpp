#include<iostream>
using namespace std;

class Person
{
    public:
        string name;

        class Address 
        {
            public:
                int h_no;
                string st_name, country;

        };
        
        Address addr;
        void AddressPlease()
        {
            cout<< name << endl << addr.h_no <<" "<< addr.st_name <<" "<< addr.country;
        }

};


int main()
{
    Person object;
    object.name="anjali";
    object.addr.h_no = 78;
    object.addr.st_name = "Kasampur";
    object.addr.country = "India";

    object.AddressPlease();

    return 0;

}


/* Nested class cannot be directly accessed to the main function. */