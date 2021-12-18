#include <iostream>
#include <conio.h>
using namespace std;

void hapusArray(int * data, int ukuran){

    for(int i=1; i<ukuran; i++){
        data[i-1] = data[i];
    }
}

main()
{
    int data[10] = {1,2,3,4,5};
    int jumlahElemen = sizeof(data)/sizeof(int);

    for(int i=0; i<jumlahElemen; i++){
        cout << data[i];
    }
    cout << endl;
    //hapus array dengan geser elemen ke kiri
    hapusArray(data, jumlahElemen);
    for(int i=0; i<jumlahElemen; i++){
        cout << data[i];
    }
    getch();
}
