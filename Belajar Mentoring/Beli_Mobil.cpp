#include <iostream> //untuk tipe standar spt cout dan cin
#include <fstream> //untuk akses file
#include <string> //untuk menggunakan cin.getline
#include <stdlib.h> //untuk fungsi yang berhubungan dengan system();
#include <unistd.h> //untuk fungsi seperti sleep();
using namespace std;

struct Pembeli {
	//di dalam struct pembeli ada variabel nama dan alamat
	string nama;
	string alamat;
};

struct Beli_Mobil {
	float harga;
	int jumlah;
	//di dalam struct Beli_Mobil ada struct Pembeli
	struct Pembeli identitas;
	string merk;
};

int main(){
	
	int pilih;
	string besar_uang;
	//merk bertipe String Array
	string merk[3] = {"Inova", "Kijang", "Pazero"};
	//deklarasikan struct baru dengan variabel 'pertama'
	Beli_Mobil pertama;

	//INPUT FILE
	cout << "======================================="<<endl;
	cout << "        STRUCT PEMBELIAN MOBIL"<<endl;
	cout << "======================================="<<endl;
	cout << "Masukan Nama Pembeli: ";getline(cin, pertama.identitas.nama); //Pakai getline agar bisa ada spasi
	cout << "Masukan Alamat      : ";getline(cin, pertama.identitas.alamat);
	cout << "Masukan jumlah      : ";cin>>pertama.jumlah;
	
	cout << "======================================="<<endl;
	cout << "Pilih Merk Mobil"<<endl;
	cout << "======================================="<<endl;
	
	//Perulangan untuk menampilkan isi dari Array Merk di atas
	for(int i=0; i<3; i++){
		cout << i+1 << ". " << merk[i] << endl;
	}
	//kembali: adalah tanda yang digunakan agar ada proses kembali dengan goto
	kembali:
	//Input variabel pilih
	cout << endl;
	cout << "Pilih: ";cin>>pilih;
	
	//Kondisi dari Inputan pilih
	if(pilih == 1){
		pertama.merk = merk[0];
		pertama.harga = 400 * pertama.jumlah;
	}else if(pilih == 2){
		pertama.merk = merk[1];
		pertama.harga = 700 * pertama.jumlah;
	}else if(pilih == 3){
		pertama.merk = merk[2];
		pertama.harga = 900 * pertama.jumlah;
	}else {
		//jika Inputan pilih tidak sama dengan 1 atau 2, maka akan kembali ke tanda 'kembali:'
		cout << "--Tidak ada di pilihan--";
		//kembali ke tanda 'kembali:'
		goto kembali;
	}
	
	//Jika jumlah uangnya lebih dari 999, maka satuan uang jadi Miliar
	//Selain itu jadi Juta
	if(pertama.harga > 999){
		pertama.harga = pertama.harga / 1000;
		besar_uang = " Milliar ";
	}else{
		besar_uang = " Juta ";
	}
	//Lakukan jeda 2 detik sebelum perintah di bawah diproses
	cout << endl;
	cout << "Sedang diproses...";
	sleep(2);
	
	
	//Hapus tampilan sebelumnya
	system("cls");
	//struct yang akan diprint
	cout << "Nama Pembeli       : "<<pertama.identitas.nama << endl;
	cout << "Alamat Pembeli     : "<<pertama.identitas.alamat <<endl;
	cout << "Jumlah yang dibeli : "<<pertama.jumlah <<endl;
	cout << "Merk yang dipilih  : "<<pertama.merk <<endl;
	cout << "Total bayar Mobil  : "<<pertama.harga <<besar_uang; 
	
	//Kita lakukan proses akses File di bawah ini
	ofstream myFile;
	//buka terlebih dahulu filenya
	//pakai ios::app agar data tertumpuk dan tidak terhapus
	myFile.open("Database.txt", ios::app);
	//lalu masukan data yang sudah kita isi ke Filenya
	myFile << "Nama Pembeli       : "<<pertama.identitas.nama << endl;
	myFile << "Alamat Pembeli     : "<<pertama.identitas.alamat <<endl;
	myFile << "Jumlah yang dibeli : "<<pertama.jumlah <<endl;
	myFile << "Merk yang dipilih  : "<<pertama.merk <<endl;
	myFile << "Total bayar Mobil  : "<<pertama.harga <<besar_uang;
	
	myFile << endl << endl; 
	
	//Jangan lupa tutup akses File
	myFile.close();
	
	//lihat di folder sudah terisi atau belum datanya
	
	
}
