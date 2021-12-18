#include <iostream>
using namespace std;

void A(int celcius){

    cout << "Masukan nilai Celcius: ";cin>>celcius;
    float fahrenheit = (celcius * 9.0/5)+32;
    cout << fahrenheit;
}
void B(int fahrenheit){

    cout << "Masukan nilai Fahrenheit: ";cin>>fahrenheit;
    float celcius = (fahrenheit-32)*5.0/9;
    cout << celcius;
}
void C(int celcius){

    cout << "Masukan nilai Celcius: ";cin>>celcius;
    float reamur = 4.0/5 * celcius;
    cout << reamur;
}
void D(int reamur){

    cout << "Masukan nilai Reamur: ";cin>>reamur;
    float celcius = 4.0/5 * reamur;
    cout << celcius;
}
void E(int fahrenheit){

    cout << "Masukan nilai Fahrenheit: ";cin>>fahrenheit;
    float reamur = (fahrenheit - 32)*4.0/9;
    cout << reamur;
}
void F(int reamur){

    cout << "Masukan nilai Reamur: ";cin>>reamur;
    float fahrenheit = (reamur*9.0/4)+32;
    cout << fahrenheit;
}

main()
{
    char pilih;
    int nilai;

    cout<<"Pilih konversi berikut: "<<endl;
    cout<<"A. C ke F"<<endl;
    cout<<"B. F ke C"<<endl;
    cout<<"C. C ke R"<<endl;
    cout<<"D. R ke C"<<endl;
    cout<<"E. F ke R"<<endl;
    cout<<"F. R ke F"<<endl;
    cout<<"X. SELESAI"<<endl;

    cout<<"\nMasukan pilihan: ";cin>>pilih;

    switch(pilih)
    {
    case 'A':
        A(nilai);
        break;
    case 'B':
        B(nilai);
        break;
    case 'C':
        C(nilai);
        break;
    case 'D':
        D(nilai);
        break;
    case 'E':
        E(nilai);
        break;
    case 'F':
        F(nilai);
        break;
    case 'X':
        cout<<"SELESAI";
        break;
    default:
        cout<<"Anda salah memasukan kode";
    }
}
