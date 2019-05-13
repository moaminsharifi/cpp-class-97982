#include <iostream>
#include <array>
using namespace std;

unsigned long long int fact (int b)
{
    unsigned long long int  p=1;
    for (int i=b;i>=2;i--)
    {
        p*=i;
    }
    return p;
}
int main()
{
   int a{0};
   cin >> a;
   cout << fact(a);
    return 0;
}



