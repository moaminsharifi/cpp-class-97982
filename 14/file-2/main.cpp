#include <iostream>
#include<fstream>


using namespace std;

int main()
{
    fstream file;
    file.open("text.txt" , fstream::in | fstream::out | fstream::app);
    for (int i = 0 ; i < 100 ; i++){
        file<<i<<endl;
    }

    file.close();
    cout << "all is good" << endl;
    return 0;
}
