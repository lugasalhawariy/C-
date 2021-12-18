#include <iostream>
using namespace std;

main()
{
    float tangki;
    int waktu;
    float persentasi;

    tangki = 500;
    waktu = 1440;

    int no_motor = 1;
    int no_mobil = 1;
    int no_truk = 1;

    for(int i=0; i<tangki;)
    {
        persentasi = tangki * 100 / 500;
        cout << "\nSisa waktu adalah        : "<<waktu<<" menit"<<endl;
        if(waktu % 10 == 0)
        {
            cout << "Sisa tangki              : "<< tangki <<" Liter"<<endl;
            cout << "Persediaan bensin adalah : "<<persentasi<<"%"<<endl;
            i + 2;
            waktu -= 10;
            tangki -= 2;
            cout << endl;
            cout <<no_motor<<". Motor isi bensin" << endl;
            no_motor++;
        }
        if(waktu % 30 == 0 && tangki >= 6)
        {
            i + 6;
            tangki -= 6;
            cout <<no_mobil<<". Mobil isi bensin" << endl;
            no_mobil++;
        }
        if(waktu % 60 == 0 && tangki >= 10)
        {
            i + 10;
            tangki -= 12;
            cout <<no_truk<<". Truk isi bensin" << endl;
            no_truk++;
        }
    }
    persentasi = tangki * 100 / 500;
    cout << "Sisa tangki              : "<< tangki <<" Liter"<<endl;
    cout << "Persediaan bensin adalah : "<<persentasi<<"%"<<endl;
}
