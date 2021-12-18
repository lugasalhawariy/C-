#include <iostream>
using namespace std;

int faktorial(int f){

  int hasil = 1;
  int jumlah = f;
  for(int i=0; i<jumlah; i++){
    hasil = hasil * f;
    f--;
  }
  return hasil;
}

int main() {
  int n;
  cout << "Masukan nilai: ";cin>>n;

  cout << faktorial(n);
}
