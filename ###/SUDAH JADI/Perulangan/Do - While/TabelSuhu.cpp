#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int nomor;
    float f, r, c=0, k;
    nomor=1;
    cout<<"\t\t\t\b   Tabel Konversi Suhu\n";
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"No\tCelcius\t\tFarenheit\tReamur\t\tKelvin\n";
    cout<<"=============================================================="<<endl;
    do
    {
        f=c*(9/5.0)+32;
        r=4/5.0*c;
        k=c+273;
        cout<<nomor<<"\t"<<c<<"\t\t"<<f<<"\t\t"<<r<<"\t\t"<<k<<endl;
        c+=5;
        nomor++;
    }while(nomor<22);
getch();
}
