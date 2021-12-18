#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int bil=1, total=0;
    string c;
    for(;bil<=20;)
    {
        total+=bil;
        if(bil==(20-1))
        {
            cout<<bil<<" = ";
        }
        else
        {
            cout<<c<<bil<<" + ";
        }
        bil+=2;
    }
    cout<<total;
    getch();
}
