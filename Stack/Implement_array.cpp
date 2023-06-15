#include<iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int * arr;
    Stack(int a){
        size = a;
        top=-1;
        arr= new int[a];
    }
    void push(int num){
        top++;
        arr[top]=num;
    }
    void display(){

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    int pop(){
        int res = arr[top];
        top--;
        return res;
    }


};



int main(){
    Stack s(1);
    s.push(3);
    s.display();
    return 0;
}