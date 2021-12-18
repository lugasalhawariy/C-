#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    char nama_bulan;
    int tgl_lahir, thn_lahir, bln_lahir, tgl_skg, bln_skg, thn_skg;
    int umur, umur_bln, umur_tgl;

    cout << "         PROGRAM MENGHITUNG UMUR"<<endl;
    cout << "=======================================\n";
    cout << " 1. Januari\t\t 2. Februari\n 3. Maret\t\t 4. April\n 5. Mei\t\t\t 6. Juni"<<endl;
    cout << " 7. Juli\t\t 8. Agustus\n 9. September\t\t 10. Oktober\n 11. November\t\t 12. Desember"<<endl;
    cout << "======================================="<<endl;
    cout << "Masukan tanggal lahir    : ";
    cin >> tgl_lahir;
    cout << "Masukan bulan lahir      : ";
    cin >> nama_bulan;
    cout << "Masukan tahun lahir      : ";
    cin >> thn_lahir;
    cout << endl;
    cout << "Masukan tanggal sekarang : ";
    cin >> tgl_skg;
    cout << "Masukan bulan sekarang   : ";
    cin >> bln_skg;
    cout << "\nTanggal lahir anda adalah  ";
    cout << tgl_lahir << "/" ;

switch(nama_bulan)
        {
        case '1'  :
        //case '01' : Mas kenapa ga bisa kalo kita tambah case-nya?
            bln_lahir=1;
            cout << "Januari";
            break;
        case '2' :
            bln_lahir=2;
            cout << "Februari";
            break;
        case '3' :
            bln_lahir=3;
            cout << "Maret";
            break;
        case '4' :
            bln_lahir=4;
            cout << "April";
            break;
        case '5' :
            bln_lahir=5;
            cout << "Mei";
            break;
        case '6'  :
            bln_lahir=6;
            cout << "Juni";
            break;
        case '7'  :
            bln_lahir=7;
            cout << "Juli";
            break;
        case '8'  :
            bln_lahir=8;
            cout << "Agustus";
            break;
        case '9'  :
            bln_lahir=9;
            cout << "September";
            break;
        case '10' :
            bln_lahir=10; //Kenapa setiap input bulan lahir yang 2 angka tidak bisa? Tapi kalo input bulan yang sekarang bisa.
            cout << "Oktober";
            break;
        case '11' :
            bln_lahir=11;
            cout << "November";
            break;
        case '12' :
            bln_lahir=12;
            cout << "Desember";
            break;
        default   :
            cout << "Salah memasukkan kode";
            break;
        getch();
        }
        cout << "/" << thn_lahir;

           if(bln_lahir>bln_skg&&tgl_lahir>tgl_skg)
              {
                  umur=2017-thn_lahir; //Karena belum ULTAH
                  umur_bln=bln_lahir-bln_skg;
                  umur_tgl=tgl_lahir-tgl_skg;
              }
              else if(bln_lahir<bln_skg&&tgl_lahir>tgl_skg)
              {
                  umur=2018-thn_lahir; //Karena tgl lahirnya sudah lewat
                  umur_bln=bln_skg-bln_lahir;
                  umur_tgl=tgl_lahir-tgl_skg;
              }
                else if(bln_lahir>bln_skg&&tgl_lahir<tgl_skg)
                {
                    umur=2017-thn_lahir; //Karena belum ULTAH
                    umur_bln=bln_lahir-bln_skg;
                    umur_tgl=tgl_skg-tgl_lahir;
                }
                    else if(bln_lahir<bln_skg&&tgl_lahir<tgl_skg)
                    {
                        umur=2018-thn_lahir; //Karena tgl lahirnya sudah lewat
                        umur_bln=bln_skg-bln_lahir;
                        umur_tgl=tgl_skg-tgl_lahir;
                    }
            else
            {
                umur=2018-thn_lahir;
                umur_bln=0; //Karena sedang ULTAH
                umur_tgl=0;
                cout<<"\n\nSELAMAT ULANG TAHUN !!!";
            }

        cout << "\n\nUmur anda adalah : "<<umur<<" Tahun "<<umur_bln<<" Bulan "<<umur_tgl<<" Hari ";

    return 0;
}
