#include <iostream>

using namespace std;


int calPrice(char input, int sumPrice , int amount){
 switch(input) {
            case '1' :
                sumPrice = sumPrice + (100 * amount);
                 break;       // and exits the switch
            case '2' :
                sumPrice = sumPrice + (80 * amount);
                break;      // and exits the switch
            case '3' :
                sumPrice = sumPrice + (70 * amount);
                break;      // and exits the switch
            case '4' :
                sumPrice = sumPrice + (35 * amount);
                break;      // and exits the switch
            case '5' :
                sumPrice = sumPrice + (140 * amount);
                break;
        }
        return sumPrice;
}

float calVat(int sumPrice){

int vat = (sumPrice/100) * 20;
return vat;
}

void printData(int sumPrice , int vat ,int countBook){
cout<<"price is :"<<sumPrice<<"$ \n"<<
        "book Amount: "<<countBook<<"$ \n"<<
        "Vat is: "<<vat<<"$"<<endl;

}


int main()
{
    int countBook = 0;
    int sumPrice = 0;
    char input;
    int amount = 0;

    while(true){
        cout<<"enter Type : (for checkout enter C or c) "<<endl;
        cin>> input;


        if(input == 'C' || input == 'c'){
            break;
        }
        cout<<"amount :"<<endl;
        cin>>amount;

        sumPrice = calPrice(input, sumPrice , amount);

        countBook = countBook + amount;

    }
    int vat = calVat(sumPrice);
    printData(sumPrice, vat ,countBook);
    return 0;
}
