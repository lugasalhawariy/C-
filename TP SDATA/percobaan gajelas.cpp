#include <iostream>
#include <fstream>
#define maks 10
using namespace std;

class Stack {
	public:
		//buat method untuk prosesnya
		void baca();
		void tulis();
		void push();
		void pop();
		void print();
		
	private:
		//buat variabel dengan tipe private, agar tidak asal dirubah
		int data[maks] = {0,0,0,0,0,0,0,0,0,0};
		int top = -1;
		fstream myFile;
};

//method baca pada class Stack
void Stack::baca(){
	//buka file Database.txt
	myFile.open("Database.txt");
	//buat variabel integer dengan nilai awal -1
	int i = -1;
	//lakukan perulangan sampai akhir file
	while (!myFile.eof()){
			//increment variabel i ketika ada kata baru
			i++;
			//masukan isi dari myFile (Database.txt) ke data array
			myFile >> data[i];
	}
	//tutup akses file
	myFile.close();
	//jadikan variabel top sama dengan variabel i
	top = i;
}

//method tulis dari class Stack
void Stack::tulis(){
	//buka akses file Database.txt
	myFile.open("Database.txt", ios::out);
	//lakukan perulangan sebanyak maks
	for(int i=0; i<maks; i++){
		//masukan isi array ke myFile (Database.txt) + baris baru
		myFile << data[i] << "\n";
	}
	//tutup akses file
	myFile.close();
}

//method pertambahan dari class Stack
void Stack::push(){
	//buat variabel baru untuk menyimpan data baru
	int data_baru;
	//panggil method baca(); untuk mengecek isi dan jumlah top
	baca();
	
	//geser ke bawah
	for(int i=maks; i>0; i--){
		data[i] = data[i-1];
	}
	
	//masukan data baru
	cout << "Masukan data baru: ";cin>>data_baru;
	//increment variabel top
	top++;
	//karena sudah digeser maka index ke-0 kosong, dan kita isi yang baru
	data[0] = data_baru;
	tulis();
}

void Stack::print(){
	baca();
	for(int i=0; i<maks; i++){
		cout << data[i] << " ";
	}cout <<endl;
}

int main(){
	Stack objek;
	
	objek.print();
	objek.push();
	objek.print();
}
