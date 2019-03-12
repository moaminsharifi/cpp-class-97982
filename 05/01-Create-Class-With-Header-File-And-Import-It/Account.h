#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account{
    public:
        // Geter and Setter functions
        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string GetlastName() { return lastName; }
        void SetlastName(string val) { lastName = val; }
        string Getnumber() { return number; }
        void Setnumber(string val) { number = val; }

    private:
        //Definde Vars
        int id;
        string name;
        string lastName;
        string number;
};

#endif // ACCOUNT_H_INCLUDED
