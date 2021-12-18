#include <iostream>
using namespace std;

main()
{
    int a,b,c;

    cout<<"Masukan nilai a: ";cin>>a;
    cout<<"Masukan nilai b: ";cin>>b;
    cout<<"Masukan nilai c: ";cin>>c;

    if(a < b && a < c){
        cout<<"A bilangan terkecil.";
    }
    else if(b < a && b < c){
        cout<<"B bilangan terkecil.";
    }
    else if(c < a && c < b){
        cout<<"C bilangan terkecil.";
    }
    else if(b > a && b > c){
        cout<<"B bilangan terbesar.";
    }
    else if(c > a && c > b){
        cout<<"C bilangan terbesar.";
    }
    else if(a > b && a > c){
        cout<<"A bilangan terbesar.";
    }
    else
    {
        cout<<"Tidak ada yang lebih besar atau yang lebih kecil\nSemua sama.";
    }
}
