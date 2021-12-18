#include <iostream>
#include <stdlib.h>
using namespace std;

int faktor(int a){
	if(a == 1){
		return 1;
	}else{
		return a * faktor(a-1);
	}
}

int main(){
	
	int hasil;
	for(int i=0; i<3; i++){
		hasil = i * (i+1);
	}
	cout << hasil;
	cout << endl;
	cout << faktor(3);
}
