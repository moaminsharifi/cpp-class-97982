#include <iostream>
#include<string>
using namespace std;
// For Import File
#include "Account.h"

int main()
{
    Account myAccount;
    myAccount.Setid(1);
    myAccount.Setname("amin");
    myAccount.SetlastName("sharifi");
    myAccount.Setnumber("+98211112222");
    // show info
     cout <<"id \t" << "name \t" <<"last name \t" <<"number \t \n";
    cout << myAccount.Getid() <<" \t "<<myAccount.Getname() <<" \t "<<myAccount.GetlastName()<<" \t "<<myAccount.Getnumber() ;
    return 0;
}
