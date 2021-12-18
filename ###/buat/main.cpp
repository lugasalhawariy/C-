#include<iostream>
using namespace std;

struct Node{

    int data;
    Node * next;

};

void push(Node ** head_ref){
    int data;
    cout << "Masukan data: ";cin>>data;

    Node * object_baru = new Node;
    object_baru -> data = data;
    object_baru -> next = (*head_ref);
    (*head_ref) = object_baru;
}
void tampilkan(Node * head){

    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

}
void push_after(Node * head){

    int data, index;
    Node * ptr = head;
    cout << "Masukan index: ";cin>>index;
    cout << "Masukan data : ";cin>>data;

    for(int i=0; i<index-1; i++){
        ptr = ptr->next;
    }
    Node * object = new Node;
    object->data = data;
    object->next = ptr->next;
    ptr->next = object;

}

int main(){

    Node * head = nullptr;

    push(&head);
    push(&head);
    push(&head);
    push(&head);

    tampilkan(head);

    push_after(head);

    tampilkan(head);

}
