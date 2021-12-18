#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int gotoxy(int x, int y) //Fungtion untuk memindahkan kursor sesuai kordinat yang ditentukan
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main()
{
    int a=2, b=1, c=2, d=1, e;
    system("cls");
    for(e=1; e<17; e++)
    {
        gotoxy(e, e); //agar kursor pindah ke lokasi yang diinginkan
        system("color e") /*<<e++*/ ;
        printf("Warna ke-%d",e); //tidak bisa pakai COUT
    }
    system("color 4");
    printf("\n\t\t Borland C++");
    getch();
}
