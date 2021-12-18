#include <iostream>
using namespace std;

struct Node {
  int data;
  Node * next;
};

void push(Node ** head_ref, int data){
  Node * objekBaru = new Node;
  objekBaru->data = data;
  objekBaru->next = (*head_ref);
  (*head_ref) = objekBaru;
}

void insertAfter(Node * head){
  int data, index;
  Node * ptr;
  ptr = head;
  cout << "Masukan index: ";cin>>index;
  cout << "Masukan data : ";cin>>data;
  if(head){
    for(int i=0; i<index-1; i++){
      ptr = ptr->next;
    }
    Node * baru = new Node;
    baru->data = data;
    baru->next = ptr->next;
    ptr->next = baru;

  }else{
    cout << "Anda salah jurusan";
  }
}

void print(Node * head){
  while ( head != nullptr){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main(){
  Node * head = nullptr;

  push(&head, 8);
  push(&head, 5);
  push(&head, 9);
  push(&head, 2);
  push(&head, 1);

  print(head);

  insertAfter(head);

  print(head);

}
