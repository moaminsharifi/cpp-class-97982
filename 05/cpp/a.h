#ifndef A_H_INCLUDED
#define A_H_INCLUDED
class student{
private:
    int id;
    string name;
public:
    void setName(string ename){name = ename};
    void setId(int eid){id = eid};
    void showName(){cout<<"name "<<name };
    void showId(){cout<<"id "<<id};

};


#endif // A_H_INCLUDED
