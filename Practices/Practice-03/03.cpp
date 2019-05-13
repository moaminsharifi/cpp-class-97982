#include <iostream>
#include <array>

using namespace std;

/*int sum (array<int,10>a)
{
    int _sum{0};
    for (auto const &i:a)
        {
            _sum+=i;
        }
    return _sum;
}

int main()
{
    array <int,10> a;
    for (int i=0;i<10;i++)
    {
        cin >> a[i];
    }
    cout << sum(a);
    return 0;
}
*/


int fact(int a)
{
   unsigned long long int  f=1;
    for (int i=1;i<=a;i++)
    {
       f*=i;
       cout<<f<<endl;
    }

    return f;
}

int main ()
{
    int a;
    cin >>a;
    cout << fact(a);
    return 0;
}
