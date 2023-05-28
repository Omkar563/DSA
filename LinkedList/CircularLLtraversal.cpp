#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node * next;
    Node(int data){

        this->data= data;
        this->next = NULL;

    }

};

void show(Node * head){
    Node * curr = head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    while(curr !=head);


}

int main(){

    Node *head= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=b;
    b->next=c;
    c->next =d;
    d->next = head;
    

    show(head);

    
    
   
    
    return 0;
}