#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){
	
	string penampung;
	ifstream Baca;
	Baca.open("myFile.txt");
	
	while(!Baca.eof()){
		cout << Baca;
	}
	
	Baca.close();
}
