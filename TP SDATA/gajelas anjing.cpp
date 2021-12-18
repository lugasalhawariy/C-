#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node * prev;
  struct Node * next;
};

void tambah(Node * objek, Node * akhir){
  int data_baru;
  Node * baru = new Node;
  cout << "Masukan data: ";cin>>data_baru; 
  baru->data = data_baru;
  baru->prev = objek->next;
  baru->next = NULL;

  akhir = baru;
}

void print(Node * awal){
  Node * temp = awal;
  while(temp->next != NULL){
    temp = temp->next;
    cout << temp->data << " ";
  }
}

int main(){
	Node * objek = new Node; 
	Node * awal = NULL;
	Node * akhir = NULL;

	tambah(objek, akhir);
	print(awal);
}
