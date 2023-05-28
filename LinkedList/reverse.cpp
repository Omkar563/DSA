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

Node* reverse_it_(Node * head){
    Node * curr=head;
    Node* prev = NULL;
    Node * nxt = curr->next;

    while(curr!=NULL){
        
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;

        


        
    }
    return prev;

}

Node * reverse_rec(Node*head){
    
    if(head->next==NULL || head==NULL){
        return head;

    }
    Node * newHead = reverse_rec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
    

}



int main(){

    Node *head= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);

    head->next=b;
    b->next=c;
    c->next =d;
    

    // show(reverse_it_(head));
    cout<<endl;
    // show(reverse_rec(head));

    
    
   
    
    return 0;
}