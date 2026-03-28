#include<iostream>
using namespace std;


class Node{
    public: 
        
    int data;
    Node*next;

    Node(int val){
    data = val;
    next =NULL;

    }
};

class Stack{
    public:
       Node* top;
       Stack(){
        top = NULL;              // constructor
       }


    void push(int val){
        Node* newNode = new Node(val);
        if(top ==NULL){
            top = newNode;
            return ;
        }

        else{
           newNode -> next = top;
           top = newNode;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack is Empty\n";
        }
        Node*temp = top ;
        top = top-> next;
        delete temp;
    }

    bool isEmpty(){

        Node*temp = top;
        if(top==NULL){
            cout<<"empty stack";
             return true;
        }
       else {
        return false;
       }
       
    }

    void peek(){
        cout<<top->data<<" ";
    }



void display(){
    Node*temp =top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp ->next;
    }
}

};
 int main (){
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.display();

    cout<<endl;

    stack.pop();
    cout<<endl;
    stack.display();

    cout<<endl;
    stack.peek();
 }