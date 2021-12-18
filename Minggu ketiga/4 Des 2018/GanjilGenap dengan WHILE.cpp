#include <iostream>
using namespace std;

main()
{
    int n;
    char pil;

    while(true)
    {
        lanjut:
        cout<<"Masukan angka: ";cin>>n;
        if(n%2==1){
            cout<<"Ganjil"<<endl;
        }
        else{
            cout<<"Genap"<<endl;
        }
        cout<<"Lanjutkan? [Y/N]: ";cin>>pil;
        if(pil == 'Y'||pil == 'y'){
            goto lanjut;
        }
        else if(pil == 'N'||pil == 'n'){
            break;
        }
        else{
            cout<<"Anda salah memasukkan kode.";
            break;
        }
    }
}
