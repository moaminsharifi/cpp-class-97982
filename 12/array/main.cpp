#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int , 12> arr;
    for(int i = 0 ; i < 12 ; i++){
        arr[i] = i * i;
    }

    for(i : arr){
        i = 10 ;
    }

    for(i : arr){
        cout<<i<<endl ;
    }

    cout << "Hello world!" << endl;
    return 0;
}
