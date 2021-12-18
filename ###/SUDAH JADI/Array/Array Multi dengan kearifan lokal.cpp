#include <iostream>
using namespace std;

void dimensi(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    for(int i=0; i < baris; i++)
    {
        cout << "[";
        for(int j=0; j < kolom; j++)
        {
            cout << *(ptrArray + index);
            index++;
        }
        cout <<"]"<<endl;
    }
}

int main()
{
    int x, y;
    int nomor_baris = 0;
    int nomor_kolom = 0;

    cout << "Masukan nilai baris: ";cin>>x;
    cout << "Masukan nilai kolom: ";cin>>y;

    cout << endl;

    const int baris = x;
    const int kolom = y;

    int ArrayMD [baris][kolom];

    for(int i=0; i<x; i++)
    {
        nomor_kolom = 0;
        for(int j=0; j<y; j++)
        {
            cout<<"Masukan baris "<<nomor_baris<<" kolom "<<nomor_kolom<<" : ";
            cin>>ArrayMD[i][j];
            nomor_kolom++;
        }
        nomor_baris++;
    }

    cout << endl<<endl;
    dimensi(*ArrayMD, baris, kolom);
}
