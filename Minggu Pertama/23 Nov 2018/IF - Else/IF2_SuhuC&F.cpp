#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int input;
    float celcius, fahrenheit, rumusC, rumusF;
    cout<<"==========================\n";
    cout<<"1. Celcius ke Fahrenheit\n";
    cout<<"2. Fahrenheit ke Celcius\n";
    cout<<"==========================\n";
    cout<<"Masukkan pilihan: ";cin>>input;
    cout<<endl;

    //LOGIKA MEMILIH 1 atau 2
    if(input == 1){
        cout<<"Masukkan nilai Celcius: ";cin>>celcius;
        rumusC = 9.0/5.0*celcius+32;
        cout<<rumusC;
    }
    else if(input == 2){
        cout<<"Masukkan nilai Fahrenheit: ";cin>>fahrenheit;
        rumusF = 5.0/9.0*fahrenheit-32;
        cout<<rumusF;
    }
    else{
        cout<<"Tidak terdefinisi.";
    }
}
