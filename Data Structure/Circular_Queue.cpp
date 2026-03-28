#include<iostream>
using namespace std;


class Queue{
    int*arr;
    int rear;
    int front;
    int capacity;

    public:
        Queue(int size){
            capacity = size;
            arr = new int[size];
            rear = front = -1;
        }
      void push(int val){

         if((rear + 1 )%capacity == front){
            cout<<"Queue is full";
            return;
        
         }
         if(front == -1){
            front++;
         }
         rear = (rear+1)%capacity;
         arr[rear]= val;
      }

      void pop(){
        if(front==-1){
            cout<<"Queue is Empty\n";
            return;
        }
        if(front == rear){
            rear= front =-1;
            
        }
        else{
            front = (front+1)%capacity;
        }
      }

      bool isEmpty(){
        if(front == -1){
            return true;
        }
        else {
            return false;
        }
      }

      void dispaly(){
        if(front==-1){
            cout<<"Queue is Empty\n";
            return;
        }
        else{
             int i= front;
            while(i != (rear+1)% capacity){
                cout<<arr[i]<<" ";
                i = (i+1)% capacity;
            }
            cout<<endl;
        }
      }

};

int main(){

    Queue queue(5);

    queue.push(5);
    queue.push(6);
    queue.push(7);
    queue.push(8);
    queue.push(9);

    queue.dispaly();


}