#include <iostream>
#include <fstream>
#include <conio.h>
#define maks 100
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
		void batas();
		
	private:
		//buat variabel dengan tipe private, agar tidak asal dirubah
		int data[maks];
		int pesanan[maks];
		//data_singgah untuk tempat persinggahan file dari Database.txt ke array asli
		int data_singgah[maks];
		int top = -1;
		int top2= -1;
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
		myFile << data[i] << "\n";
	}
	//tutup akses file
	myFile.close();
}

//method pertambahan dari class Stack
void Stack::push(){
	//buat variabel baru untuk menyimpan data baru
	int data_baru;
	char pilihan3;
	//panggil method baca(); untuk mengecek isi dan jumlah top
	baca();
		top2++;
		top++;
		pesanan[top2]=data_baru;
		data[top-1]=pesanan[top2];
		system("cls");
		tulis();
		
			for(int i=top2; i>=0;i--){
		if(data[i] == 1){
			cout << "olive 1"<<endl;
		}else if(data[i]==2){
			cout << "olive 2"<<endl;
		}
		else if(data[i]==3){
			cout<<"olive 3"<<endl;
		}
		else if(data[i]==4){
			cout<<"olive 4"<<endl;
		}
		else if(data[i]==5){
			cout<<"olive 5"<<endl;
		}
	}
		cout<<"apakah anda ingin memesan lagi ? (y/n)";
		cin>>pilihan3;
		if (pilihan3='y'||'Y'){
			goto ulangi;
		}
		else{
			void print();
		}
	

	//masukan data baru
	//increment variabel top
	//karena sudah digeser maka index ke-0 kosong, dan kita isi yang baru
}

void Stack::pop(){
	baca();
	
	data[top] = 0;
	top--;
	
	tulis();
}

void Stack::print(){
	baca();
	for(int i=top-1; i>=0; i--){
		
		if(data[i] == 1){
			cout << "olive 1"<<endl;
		}else if(data[i]==2){
			cout << "olive 2"<<endl;
		}
		else if(data[i]==3){
			cout<<"olive 3"<<endl;
		}
		else if(data[i]==4){
			cout<<"olive 4"<<endl;
		}
		else if(data[i]==5){
			cout<<"olive 5"<<endl;
		}
		
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
	if(top < 0){
		return true;
	}else{
		return false;
	}
} 

int main(){
	Stack objek;
	objek.baca();
		
	return 0;
}
