#include <iostream>
#include<string>
using namespace std;

void printTen(){
cout<<10<<endl;
}

void print(int a = 10 , int b = 20 , int c = 30){
cout <<"print function: "<< a <<" "<< b<<" "<< c<<endl;
printTen();
}

int main(){
    int x = 100;

    print();

    printTen();
    return 0;
}


