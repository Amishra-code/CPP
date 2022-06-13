#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> MarksMap;
    
    //two ways of inserting elements in map
    MarksMap.insert({{"Anjali",95}, {"Suman", 98}});
    MarksMap["Deeksha"]=97;
    
    map<string, int> :: iterator iter;

    for(iter = MarksMap.begin(); iter!=MarksMap.end(); iter++)
    {
        cout<<(*iter).first <<" " <<(*iter).second <<endl;
    }

    return 0;
}