#include <iostream>

using namespace std;


float send(int count){
    return (count / 3);
}
float tax(int price , float send){
float taxPrice = ((price + send) / 100) * 20;
return  taxPrice;
}
void print(int count , int price , float tax){
 cout<<"you order: " <<count <<" and price is: " <<
    price <<" all price is (with tax) : "<<tax;

}
int main()
{
    char enter;
    int count = 0;
    int price = 0;
    int amount = 0;

    while(true){
        cout<<"enter type or c for cal"<<endl;
        cin>>enter;
        if(enter == 'c' || enter == 'C'){
            break;
        }

        count++;
        cout<<"enter amount of your order"<<endl;
        cin>>amount;
        switch(enter){
            case '1' :
                    price = price + (100 * amount);
                     break;       // and exits the switch
                case '2' :
                    price = price + (80 * amount);
                    break;      // and exits the switch
                case '3' :
                    price = price + (70 * amount);
                    break;      // and exits the switch
                case '4' :
                    price = price + (35 * amount);
                    break;      // and exits the switch
                case '5' :
                    price = price + (140 * amount);
                    break;
            }

        }

    float sendPrice = send(count);
    float taxPrice = tax(price , sendPrice) ;
    print(count, price , taxPrice);


    return 0;
}
