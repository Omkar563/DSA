#include<iostream>
using namespace std;




class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int data){
        this->prev=NULL;
        this->data= data;
        this->next = NULL;

    }

};

int main(){

    Node *a= new Node(10);
    Node *b= new Node(20);
    Node * c = new Node(30);

    a->next=b;
    b->prev=a;
    b->next = c;
    c->prev=b;
     

    
    
   
    
    return 0;
}