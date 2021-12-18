#include <iostream>
using namespace std;

int jumlah = 10;

void hapusArray(int * data, int elemen, int ukuran){
    jumlah--;
    for(int i=1; i<ukuran; i++){
        data[i-1] = data[i];
    }
}

main()
{
    int data[jumlah] = {1,2,3,4,5};
    int jumlahElemen = sizeof(data)/sizeof(int);

    for(int i=0; i<jumlahElemen; i++){
        cout << data[i];
    }
    cout << endl;
    hapusArray(data, 3, jumlahElemen);
    for(int i=0; i<jumlahElemen; i++){
        cout << data[i];
    }
}
