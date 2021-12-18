#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int bil, total=0;
    for(bil=0;bil<=20;)
    {
        bil+=2;
        total=total+bil;
        cout<<bil;
        if(bil==20)
        {
            cout<<" = ";
            break;
        }
        else
        {
            cout<<" + ";
        }
    }
    cout<<total;
    getch();
}
