#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node * prev;
  struct Node * next;
};

void tambah(Node ** awal){
  int data_baru;
  Node * baru = new Node;
  Node * akhir = (*awal);
  cout << "Masukan data: ";cin>>data_baru; 
  baru->data = data_baru;
  baru->next = NULL;

  if((*awal) == NULL){
    baru->prev = NULL;
    *awal = baru;
    return;
  }
  while(akhir->next != NULL){
    akhir = akhir->next;
  }

  akhir->next = baru;

  baru->prev = akhir;
  return;
}

void displayList(Node * awal) {
   Node * last = awal;
   while (last->next != NULL) {
      
      cout << last->data << " ";
      last = last->next;
   }
   cout << last->data;
}


int main(){
  Node * awal = NULL;

  tambah(&awal);
  tambah(&awal);
  tambah(&awal);
  tambah(&awal);
  displayList(awal);
}
