#include <iostream>
#include<fstream>


using namespace std;

int main()
{
    fstream file;
    file.open("text.txt" , fstream::in | fstream::out | fstream::app);
    file<<"hi! \n";
    file.close();
    cout << "Hello world!" << endl;
    return 0;
}
