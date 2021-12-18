#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>

#define merah system("color 4");
#define biru system("color 3");

using namespace std;

void hobby()
{
    char kal[30]="Hobby saya adalah ";
    string lanjut, alasan;
    int pilih, posisi;
    biru
    cout<<"\tPILIH HOBBY YANG DISUKAI";
    cout<<"\n====================================\n";
    cout<<"1. Memanah\t|\t4. Futsal"<<endl;
    cout<<"2. Memasak\t|\t5. Basket"<<endl;
    cout<<"3. Makan"<<endl;
    cout<<"====================================\n"<<endl;

    cout<<"Masukan pilihan-mu : ";cin>>pilih;
    cout<<endl<<endl;

    switch(pilih)
    {
    case 1 :
        cout<<kal<<"Memanah";
        loncat:
        cout<<"\n\nIngin melanjutkan [Yes/No] ? ";cin>>lanjut;
        if(lanjut=="yes"||"YES"||"Yes"||"Y"||"y"||"YA"||"ya"||"Ya")
        {
            system("cls");
            hobby();
        }
        else if(lanjut=="no"||"NO"||"No"||"N"||"n"||"TIDAK"||"tidak"||"Tidak"||"gausah"||"G"||"g")
        {
            cout<<"<<< THE END >>>";
            break;
        }
        else
        {
            system("cls");
            cout<<"Tidak terdefinisi...";
            goto loncat;
        }
        break;
    case 2 :
        cout<<kal<<"Memasak";
        goto loncat;
        break;
    case 3 :
        cout<<kal<<"Makan";
        goto loncat;
        break;
    case 4 :
        {
        cout<<"---------------------------------\n";
            cout<<"  1. Kiper (Penjaga gawang)\t|\n";
            cout<<"  2. Bek (Pertahanan)\t\t|\n";
            cout<<"  3. Gelandang\t\t\t|\n";
            cout<<"  4. Striker (Penyerang)\t|\n";
        cout<<"---------------------------------\n";
        cout<<"\nPosisi apa kamu di futsal? ";cin>>posisi;
        cout<<endl;

            switch(posisi)
            {
            case 1 :
                {
                cout<<"Apa alasan kamu memilih jadi kiper ? ";getline(cin, alasan);//cin>>alasan;
                cout<<"\nAlasan aku, "<<alasan;
                cout<<"\n\nAlasan-mu tidak ber-faedah!";
                system("pause");
                goto loncat;
                break;
                }
            case 2 :
                {
                cout<<"Apa alasan kamu memilih jadi Bek ? ";cin>>alasan;
                cout<<"\nAlasan aku, "<<alasan;
                cout<<"\n\nBanyak alasan kau!!!";
                goto loncat;
                break;
                }
            case 3 :
                {
                cout<<"Apa alasan kamu memilih jadi Gelandangan ? ";cin>>alasan;
                cout<<"\n\nAku tanya alasan kamu jadi gelandangan! bukan gelandang!";
                goto loncat;
                break;
                }
            case 4 :
                {
                cout<<"Apa alasan kamu memilih jadi Penyerang ? ";cin>>alasan;
                cout<<"\nAlasan aku, "<<alasan;
                cout<<"\n\nSiplah! Sering-sering maen COC biar barbar";
                goto loncat;
                break;
                }
            default:
                {
                cout<<"Posisi apa itu?! tidak ada di futsal! ngawur kamu!\n\nJadi gimana?";
                goto loncat;
                break;
                }
            }
        }
    case 5 :
        cout<<kal<<"Basket";
        goto loncat;
        break;
    default :
        cout<<"INPUTAN TIDAK ADA";
        goto loncat;
        break;
        getch();
    }
}

main()
{
    hobby();
    return 0;
}
