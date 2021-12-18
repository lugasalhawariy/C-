#include <iostream>

using namespace std;

int main()
{
    char arit;
    float hasil;
    int a, b;

    cout<<"Masukkan nilai 1 & 2 : ";cin>>a;cin>>arit;cin>>b;

    if(arit == '+'){
        hasil = a + b;
        cout<<hasil;}
    else if(arit == '-'){
        hasil = a - b;
        cout<<hasil;}
    else if(arit == 'x'||'*'){
        hasil = a * b;
        cout<<hasil;}
    else if(arit == '/'||':'){
        hasil = a / b;
        cout<<hasil;}
    else
        cout<<"Error";

}
