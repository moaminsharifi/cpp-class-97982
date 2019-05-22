#include <iostream>
#include<fstream>
#include<string>

using namespace std;

class student {
    public:
    string name;
    int avg;

    student(){
    }
    student(string ename , int eavg){
    name = ename;
    avg  = eavg;
    }

    int avgNum(){
    return avg;
    }

};
int main()
{

    fstream file;
    file.open("text.txt" ,fstream::out | fstream::app);
    if(file.is_open()){


    for (int i = 0 ; i < 5; i++){
         string name ; int avg ;
         cout<<"enter name ";
        cin>>name;
        cout<<"enter avg's of "<<name<<" is ";
        cin>>avg;
        student s(name , avg );
        file.write((char*)&s, sizeof(s));
    }
    file.close();


     file.open("text.txt" , fstream::in );
     student s;
     file.read((char*)&s, sizeof(s));

     int maxAvg = 0;
     while(!file.eof()){
        int avg = s.avgNum();
        if (avg > maxAvg){
            maxAvg = avg;
            cout<<"avg is: " <<avg<<endl;
        }
        file.read((char*)&s, sizeof(s));
     }
     cout<<"max is: "<<maxAvg<<endl;

    cout << "all is good" << endl;
     }else{

     cout << "can not open file" << endl;
     }
    return 0;
}
