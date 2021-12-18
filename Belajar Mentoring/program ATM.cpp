#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

//Data yang dibutuhkan:
// 1. Saldo (int)
// 2. Tarik (int)
// 3. Rekening (int)
// 4. 

struct Data {
	int saldo;
	int rekening;
	ofstream Save;
	ifstream Load;
};

// 1. Cek saldo
void cekSaldo(Data mandiri){
	cout << "Saldo anda : " << mandiri.saldo << endl << endl;
}

// 2. Tarik tunai
void tarikTunai(Data mandiri){
	//tarik
	LoadData(mandiri);
	
	int jumlahTarik;
	cout<<"masukin uang yang di ambil : ";cin>>jumlahTarik;
	
	if(jumlahTarik > mandiri.saldo){
		cout<<"Saldo kurang"<<endl;
		cout<<endl;
		
	}else{
		mandiri.saldo = mandiri.saldo - jumlahTarik;
		cout<<"Berhasil"<<endl;
		cout<<endl;
	}
}

// 3. Transfer
void transfer(Data transfer){
	
	int jumlahTransfer;
	
	cout<<"masukkan tujuan rekening	:";cin>>transfer.rekening;
	cout<<"jumlah uang transfer	:";cin>>jumlahTransfer;
	transfer.saldo = transfer.saldo - jumlahTransfer;
}

// 4. Nabung
void nabung(Data nabung){
	
	int jumlahNabung;
	cout<<"masukkan uang yang di tabung	:";cin>>jumlahNabung;
	nabung.saldo = nabung.saldo + jumlahNabung;
	cout << "Saldo bertambah..."<<endl;
}

// 5. Load data
void LoadData(Data load){
	int dataSaldo;
	
	load.Load.open("save.txt");
	load.Load >> dataSaldo;
	
	load.saldo = dataSaldo;
}
// 6. Save
void SaveData(Data save){
	save.Save.open("save.txt");
	save.Save << save.saldo;
	save.Save.close();
}



int main(){
	Data objek;
	int pilih;
	
	
	//tanda
	kembali:
	
	cout << "----------SELAMAT DATANG DI BANK----------"<<endl;
	cout << "=========================================="<<endl;
	cout << "1. CEK SALDO"<<endl;
	cout << "2. TARIK TUNAI"<<endl;
	cout << "3. TRANSFER"<<endl;
	cout << "4. MENABUNG"<<endl;
	cout << "5. LOAD DATA"<<endl;
	cout << "6. SAVE DATA"<<endl;
	cout << "7. KELUAR"<<endl;
	
	cout << endl;
	
	cout << "Masukan pilihan: ";cin>>pilih;
	
	//SWTICH-CASE
	switch(pilih){
		case 1:
			cekSaldo(objek);
			system("pause");
			system("cls");
			goto kembali;
		
		case 2:
			tarikTunai(objek);
			system("pause");
			system("cls");
			goto kembali;
			
		case 3:
			transfer(objek);
			system("pause");
			system("cls");
			goto kembali;
		
		case 4:
			nabung(objek);
			system("pause");
			system("cls");
			goto kembali;
			
		case 5:
			LoadData(objek);
			system("pause");
			system("cls");
			goto kembali;
			
		case 6:
			SaveData(objek);
			system("pause");
			system("cls");
			goto kembali;
			
		case 7:
			break;
		
		default:
			system("cls");
			cout << "Tidak ada pilihan.";
			system("pause");
			goto kembali;
	}
}
