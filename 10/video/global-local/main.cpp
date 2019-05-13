#include <iostream>

using namespace std;


int power(int a , int b, int &count){
    int pow = 1;
    count = 0;
    for(int i = 0 ; i < b ; i++){
        pow = a * pow;
        count++;
    }
    return pow;
}

int main()
{
    int count;
    int power1 = power(2,10,count);
    cout<<power1<<" " <<count<<endl;


    return 0;
}
