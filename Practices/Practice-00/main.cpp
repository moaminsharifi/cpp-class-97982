#include <iostream>
#include<string>
using namespace std;

#include"student.h"

int main()
{
    student me(1,"amin",1998,17,5,"minab");

    cout<<"id: " <<me.getId()<<" \n "<<
    "name: " <<me.getName()<<" \n "<<
    "year: " <<me.getYear()<<" \n "<<
    "avg: " <<me.getAvg()<<" \n "<<
    "term: " <<me.getTerm()<<" \n "<<
    "city: " <<me.getCity()<<endl;


    cout<<"is local?: " <<me.local()<<" \n "<<
    "is A?: " <<me.top()<<" \n "<<
    "age: " <<me.ageCal()<<endl;

    return 0;
}
