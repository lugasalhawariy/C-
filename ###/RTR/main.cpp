#include <iostream>
using namespace std;

struct Node {

    int data = 0;
    Node * next;

};

void push(Node ** head_reference, int data){

    Node * object_baru = new Node;
    object_baru->data = data;
    object_baru->next = (*head_reference);
    (*head_reference) = object_baru;
}
void cetak(Node * head){

    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
void push_setelah(Node * ptr_prev, int data){
    if(ptr_prev == nullptr){
        cout << "Tidak bisa ditambah dibelakang head";
        return;
    }
    else{
        Node * object_baru = new Node;
        object_baru->data = data;
        object_baru->next = ptr_prev->next;
        ptr_prev->next = object_baru;
    }
}

int main(){

    Node * head = nullptr;
    head = new Node;

    push(&head, 5);
    push(&head, 2);
    push(&head, 1);

    delete &head;

    cetak(head);

    cetak(head);

}
