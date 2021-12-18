#include <iostream>
using namespace std;

int data[10];

//void baca (ifstream data){
//	int data
//}

int main(){
	
	for(int i=0; i<10; i++){
		cout << "Masukan data: ";cin>>data[i];
	}
	cout << endl;
	for(int i=0; i<10; i++){
		cout << data[i] << " ";
	}
	
	for(int i=0; i<10; i++){
		data[i] =  data[i+1];
	}
	cout << endl;
	for(int i=0; i<10; i++){
		cout << data[i] << " ";
	}
}
