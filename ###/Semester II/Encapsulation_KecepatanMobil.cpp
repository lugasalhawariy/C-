#include <iostream>
#include <string.h>
using namespace std;

class mobil
{
private:
    int kecepatan;
    int jumlah_kecepatan;

public:
    mobil()
    {
        cout << "MOBIL BERJALAN" << endl;
        jumlah_kecepatan = 0;
    }

    void setKecepatan(int kecepatan)
    {
        this -> kecepatan = kecepatan;
        jumlah_kecepatan += kecepatan;
    }
    int getKecepatan()
    {
        return jumlah_kecepatan;
    };
};

main()
{
    mobil myCar;

    myCar.setKecepatan(0);
    cout << myCar.getKecepatan() <<endl;

    for(int i=0; i<10; i++)
    {
        myCar.setKecepatan(10);
        cout << myCar.getKecepatan() <<endl;
        if(myCar.getKecepatan() > 100)
        {
            cout << "Kecepatan melebihi angka seratus";
        }
    }

}
