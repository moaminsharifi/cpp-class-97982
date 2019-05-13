#include <iostream>

using namespace std;
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n-1);
}
int factLoop(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact * i;
    }
    return fact;
}
int main()
{

    cout << fact(10) << endl;
    return 0;
}
