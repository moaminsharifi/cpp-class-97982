#include <iostream>
#include<array>
using namespace std;
void printStar(int numberStar){

    for(int i = 0 ; i < numberStar ; i++){
      cout<<"*";
    }
    cout<<endl;

}
int main()
{
    array<float, 20> arr;
    cout<<"Enter Numbers:"<<endl;
    for(i : arr){

        cin>> i;
    }

    cout<<" ... "<<endl;

    int counterOne = 0;
    int counterTwo = 0;
    int counterTree = 0;

    for(i : arr){

        if(i > 15){
          counterOne++;
        }
        if( i >10 && i <= 15){
            counterTwo++;
        }
        if(i <= 10){
            counterTree++;
        }
    }
    cout<<" higher than 15: ";
    printStar(counterOne);
    cout<<" higher than 10 and lower than 15: ";
    printStar(counterTwo);
    cout<<"lower than 10: ";
    printStar(counterTree);

    return 0;
}

