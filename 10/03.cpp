#include <iostream>
#include<string>

using namespace std;

int check(int &a , int &b){
a++;
b++;
}

int main()
{
    int a , b ;
    cout<<"enter a and b ";
    cin>>a>>b;

    check(a , b);

    cout<<"a " << a << "b " <<b;

    return 0;
}
