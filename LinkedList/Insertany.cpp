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

void insertany(Node * head , int x, int pos){

  Node * curr = head;
  Node * temp = new Node(x);
  Node* prev = head;
  
  for(int i=0;i<pos-2;i++){
    prev=prev->next;
  }
  temp->next=prev->next;
  prev->next=temp;
  

}

void show(Node * head){

    Node * temp = head;
    while(temp != NULL){
            cout<<temp->data<<" ";
            temp = head->next;
            head = head->next;
    }


}


int main(){
  

    Node *head= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=b;
    b->next=c;
    c->next =d;

    insertany(head,3,3);
    show(head);

    

    
    

    

    
   
    
    return 0;
}