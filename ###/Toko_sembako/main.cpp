#include <iostream>
using namespace std;

//Fungsi input-an
void menu()
{
    cout << "\t============================"<<endl;
    cout << "   \t   Menu Sembako Pak Nizar"<<endl;
    cout << "\t____________________________"<<endl;
    cout << endl;
    cout << "\t 1. Beras\t2. Gula\n\t 3. Terigu\t4. Garam"<<endl;
}
//Fungsi membayar
int membayar(int harga)
{
    int total;

    if(harga == 8500){
        total += harg
    }
}
//Fungsi menghitung beras
void beras()
{
    int harga = 8500;
    int kilo;
    cout << "Masukan jumlah yang ingin dibeli: ";cin>>kilo;
    if(kilo < 0){
        cout << "Tidak dapat diproses"<<endl;
    }
    else{
        cout << "Jumlah yang harus anda bayarkan adalah: Rp. "<<kilo*harga<<endl;
        membayar()
    }
}


main()
{
    int pilih;
    menu();

    cout << "Masukan pilihan: "<<endl;
    switch(pilih)
    {
    case 1:
        beras()
    }
}
