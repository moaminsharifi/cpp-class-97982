#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
class student{

private:
    int id;
    string name;
    int year;
    int avg;
    int term;
    string city;
public:
    student (){};
    student (int valID , string valName ,int valYear ,int valAvg , int valTerm , string valCity){
        id = valID;
        name = valName;
        year = valYear;
        avg = valAvg;
        term = valTerm;
        city = valCity;
    };

    void setId(int valID){
        id = valID;
        };
    int getId(){
        return id;
        };

    void setName(string valName){
        name = valName;
        };
    string getName(){
        return name;
        };

    void setYear(int valYear){
        year = valYear;
        };
    int getYear(){
        return year;
        }

    void setAvg(int valAvg){
        avg = valAvg;
        };
    int getAvg(){
        return avg;
        };

    void setTerm(int valTerm){
        term = valTerm;
        };
    int getTerm(){
        return term;
        };

    void setCity(string valCity){
        city = valCity;
        };
    string getCity(){return city;
    };


    string local(){
    if(city == "sirjan"){
        return "local";
    }else{
        return "not local";
        }
    }

    string top(){

    if(avg >= 17 ){

        return "A ";
    }else{
        return "not A";
    }

    }


    int ageCal(){

        int age = 2019-year;
        return age;
    }

};


#endif // STUDENT_H_INCLUDED
