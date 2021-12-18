#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * next;
	Node * prev;
};

void tambah(Node ** head){
	int data_baru;
	
	cout << "Masukan data: ";cin>>data_baru;
	
	Node * baru = new Node;
	Node * akhir = *head;
	
	baru->data = data_baru;
	baru->next = NULL;
	
	if(*head == NULL){
		baru->prev = NULL;
		*head = baru;
		return;
	}
	while(akhir->next != NULL){
		akhir = akhir->next;
	}
	
}


int main(){
	Node * head = NULL;
	
	tambah(&head);
	tambah(&head);
}
