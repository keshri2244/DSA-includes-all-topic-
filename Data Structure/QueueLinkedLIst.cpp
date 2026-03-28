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

class Queue{

    public:
       Node*rear;
       Node*front;

       Queue(){
        rear= NULL;
        front=NULL;
       }

      void addBack(int val){

        Node*newNode = new Node(val);
        if(front == NULL){
             rear = front = newNode;
             return;
        }
        rear->next=newNode;
        rear = newNode;

       }


       void remove(){

         if(front ==NULL){
            cout<<"Queue is Empty\n";
            return;
         }
         Node*temp = front;
         front = front-> next;

         temp-> next = NULL;
         delete temp;
        
       }


       bool isEmpty(){
        if(front == NULL){
            return true;
        }
       }

       void display(){

        if(isEmpty()){
            cout<<"Queue is Empty";
            return;
        }
        Node*temp = front;
        while(temp != NULL){
            cout<<temp-> data <<" ";
            temp = temp -> next;
        }
  
       }

};