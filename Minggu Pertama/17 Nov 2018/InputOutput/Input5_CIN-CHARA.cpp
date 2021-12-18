#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
    int harga = 10000;
    char nama;
    cout<<"Masukan nama [hanya satu karakter]: ";
    cin>>nama;

    printf("CHAR-MU ADALAH : %c",nama);
    printf("\n");
    printf("Harga %i",harga);
    return 0;
}
