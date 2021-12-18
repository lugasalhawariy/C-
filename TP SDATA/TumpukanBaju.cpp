#include <iostream>
#include <fstream>
#include <conio.h>
#define maks 5
using namespace std;

struct Stack {
	char data[maks];
	int top = -1;
}objek;

void Append(){
	
	char data_baru;
	//baca File
	ifstream readFile;
	readFile.open("Database.txt");
	while (!readFile.eof()){
			objek.top++;
			readFile >> objek.data[objek.top];
	}
	readFile.close(); //close File ifstream (readFile)
	
	//geser File
	for(int i=0;i<objek.top;i++){
		objek.data[objek.top+1] = objek.data[objek.top];
	}
	
	//Increment-kan terlebih dahulu top dari si Objek
	objek.top++;
	cout<<endl<<objek.top;
	
	//masukan data baru ke array;
	cout << endl;
	cout << "Masukan data baru: ";cin>>data_baru;
	objek.data[0] = data_baru;
	
	for(int i=0;i<objek.top;i++){
		cout << objek.data[i] << endl;
	}
	cout<<endl<<objek.top;
	
	//tulisFile();
	ofstream myFile;
	myFile.open("Database.txt");
	for(int i=0;i<objek.top;i++){
		myFile << objek.data[objek.top] << endl;
	}
	myFile.close();
	 
}

int main(){
	
	Append();
	Append();
}
