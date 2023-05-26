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

int main(){

    Node *a= new Node(10);
    Node *b= new Node(20);
    
    
   
    
    return 0;
}