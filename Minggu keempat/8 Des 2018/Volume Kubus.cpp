#include <iostream>
#include <math.h>
using namespace std;

int volKubus(int s){
    return s*s*s;
}

main()
{
    int sisi;
    cout<<"Masukan sisi kubus : ";cin>>sisi;
    cout<<"Volume kubus adalah = "<<volKubus(sisi);
}
