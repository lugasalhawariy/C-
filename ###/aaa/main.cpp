#include <iostream>
using namespace std;

float faktorial(int a)
{
    if(a == 0)
        return true;
    else
    {
         if(a % 2 == 0)
         {
             return faktorial(a-1) + 1/(float)a;
         }
         else
         {
             return faktorial(a-1) - 1/(float)a;
         }
    }
}
main()
{
    int a;

    cout << "Masukan nilai : ";cin>>a;
    //cout << "Masukan nilai : ";cin>>b;

    cout << faktorial(a);
}
