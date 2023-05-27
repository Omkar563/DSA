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

    Node * temp = head;
    while(temp != NULL){
            cout<<temp->data<<" ";
            temp = head->next;
            head = head->next;
    }


}

int middle(Node* head){
    Node* slow=head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return (slow->data);

}

int main(){

    Node *head= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=b;
    b->next=c;
    c->next =d;
    
    // show(head);
    cout<< middle(head);

    
    
   
    
    return 0;
}