#include <iostream>
using namespace std;

main()
{
    int nilai[5], *p;
    p=nilai;
    *p=10;
    p++;
    *p=20;
    p=&nilai[2];
    *p=30;
    p=nilai + 3;
    *p=40;
    p=nilai;
    *(p+4)=50;

    for(int n=0; n<5; n++){
        cout<<" "<<nilai[n]<<endl;
    }
}
