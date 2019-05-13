#include <iostream>
#include<array>
using namespace std;

#define SIZE 10

int sumArray(array<int, SIZE>arr){
    int sum = 0;

    for(i : arr){

        sum = sum + i;
    }
    return sum;

}
int main()
{

    array<int, SIZE>arr;
    cout<<"enter array ";
    for(i : arr){

        cin>> i;
    }
    for(int i = 0 ; i < arr.size(); i++){

        cin>>arr[i];
    }

    cout<<"Sum is: "<<sumArray(arr)<<endl;



    return 0;
}
