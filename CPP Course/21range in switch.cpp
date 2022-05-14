#include<iostream>
using namespace std;
int main()
{
    int s=10;
    switch (s)
    {
    case 1 ... 99 : {
                        cout<<"between 1 and 99";
                        break;
                    }
    case 100 ... 199 : {
                        cout<<"between 100 and 199";
                        break;
                    }           
    
    default:   {
                  cout<<"default";
                  break;
               }
                  
    }

    return 0;
    
}