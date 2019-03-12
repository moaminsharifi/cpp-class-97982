#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED


class Account
{
    public:
        Account(int newId, string  Name, string LastName) {
        id = newId;
        Name = Name;
        LastName = LastName;
        cout<<"You Create Account instance with constructor and set value at frist \n"<<
        "id : "<<id<<"  name : "<<Name<<"   last name : "<<LastName<<"\n \n \n";

        }
        Account(){
        cout<<"you created Account instance and now to add Vaules to class variable use this class \n"<<
        "-  to set id use Setid(int) \n"<<
        "-  to set id use SetName(string) \n"<<
        "-  to set id use SetLastName(string)"<<endl;


        }

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string GetName() { return Name; }
        void SetName(string val) { Name = val; }
        string GetLastName() { return LastName; }
        void SetLastName(string val) { LastName = val; }

    protected:

    private:
        int id;
        string Name;
        string LastName;
};

#endif // ACCOUNT_H_INCLUDED
