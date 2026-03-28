#include<iostream>
using namespace std;


class Stack{

    int* arr;
    int top ;
    int capacity;

    public:
         
         Stack(int size){
            arr = new int[size];
            top = -1;                        // constructor
            capacity = size;

         }
       void push(int val){
        if(top == capacity -1){
            cout<<"Stack is full";
        }

         arr[++top]= val;
       }

       void pop(){
        if(top== -1){
            cout<<"Stack is empty";
        }
        arr[top--];
       }

       bool isEmpty(){
        if (top==-1){
            cout<<"Stack is empty";
            return true;
        }
        else {
            return false;
        }
       }


       
       int peek(){
        return arr[top];
       }
      

       void isFull(){
        if(top == capacity-1){
            cout<<"Stack is full";
        }
       }

       
};

