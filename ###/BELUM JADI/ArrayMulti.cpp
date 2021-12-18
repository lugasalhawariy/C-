#include <iostream>
using namespace std;

void unggulanArray(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    for(int i=0; i<baris; i++)
    {
        for(int j=0; j<kolom; j++)
        {
            cout<<*(ptrArray + index)<<" ";
            index++;
        }
        cout<<endl;
    }
}

main()
{
    int baris;
    int kolom;

    cout<<"Masukan baris: ";cin>>baris;
    cout<<"Masukan kolom: ";cin>>kolom;

    cout<<endl<<endl;

    int nilaiMD[baris][kolom];

    for(int i=0; i<(baris*kolom); i++)
    {
        cout<<"Masukan nilai "<<i<<":";cin>>nilaiMD[baris][kolom];
    }
    unggulanArray(*nilaiMD, baris, kolom);
}
