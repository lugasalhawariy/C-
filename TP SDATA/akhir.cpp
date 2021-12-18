#include <iostream>
#include <fstream>
#include <conio.h>
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
		bool penuh();
		bool kosong();
		
	private:
		//buat variabel dengan tipe private, agar tidak asal dirubah
		string data[maks];
		//data_singgah untuk tempat persinggahan file dari Database.txt ke array asli
		string data_singgah[maks];
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
			//masukan isi dari myFile (Database.txt) ke data_singgah
			myFile >> data_singgah[i];
	}
	//tutup akses file
	myFile.close();
	//jadikan variabel top sama dengan variabel i
	top = i;
	int a = 0;
	
	if(top >= 10){
		penuh();
	}
	
	//file data_singgah dimasukan ke data array asli
	//lakukan dengan dibalik
	for(int i=top-1; i>=0; i--){
		data[i] = data_singgah[a];
		a++;
	}
}

//method tulis dari class Stack
void Stack::tulis(){
	//buka akses file Database.txt
	myFile.open("Database.txt", ios::out);
	//lakukan perulangan sebanyak maks
	for(int i=top-1; i>=0; i--){
		//masukan isi array ke myFile (Database.txt) + baris baru
		
		
	}
	//tutup akses file
	myFile.close();
}

//method pertambahan dari class Stack
void Stack::push(){
	//buat variabel baru untuk menyimpan data baru
	string data_baru;
	//panggil method baca(); untuk mengecek isi dan jumlah top
	baca();
	
	data[top] = data_baru;
	
	//increment variabel top
	top++;
	//karena sudah digeser maka index ke-0 kosong, dan kita isi yang baru
	data[top-1] = data_baru;
	tulis();
}

void Stack::pop(){
	baca();
	
	data[top] = "Kosong";
	top--;
	
	tulis();
}

void Stack::print(){
	baca();
	for(int i=top-1; i>=0; i--){
		cout << data[i] << endl;
	}cout <<endl;
	
	cout << "Jumlah top: " << top << endl << endl;
}

bool Stack::penuh(){
	if(top >= 10){
		return true;
	}else{
		return false;
	}
}

bool Stack::kosong(){
	if(top <= 0){
		return true;
	}else{
		return false;
	}
} 

int main(){
	Stack objek;
	objek.baca();
	int pilih;
	
	kembali:
	
	cout << "==== PILIH PROSES STACK ===="<<endl<<endl;
	cout << "1. Push" << endl;
	cout << "2. Pop" << endl;
	cout << "3. Print" << endl;
	cout << "4. Keluar" << endl<<endl;
	
	cout << "Masukan pilihan: ";cin>>pilih;
	
	switch(pilih){
		case 1:
			if(objek.penuh()){
				system("cls");
				cout << "-- STACK FULL --";
				break;
			}
			objek.push();
			system("cls");	
			goto kembali;
		case 2:
			if(objek.kosong()){
				system("cls");
				cout << "-- STACK KOSONG --";
				break;
			}
			objek.pop();
			system("cls");
			goto kembali;
		case 3:
			system("cls");
			objek.print();
			goto kembali;
		case 4:
			break;
		default:
			system("cls");
			cout << "Salah kode! kembali!";
			goto kembali;
	}
}
