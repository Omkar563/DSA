#include<iostream>
using namespace std;

// make a function to print all members of linked list
// given head node of LL


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

    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);


    


}

int main(){

    Node *head= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=b;
    b->next=c;
    c->next =d;
    

    show(head);


    
   
    
    return 0;
}