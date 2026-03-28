#include<iostream>
using namespace std;

class Queue{

    
    int*arr;                        //  iska size define 
    int front;
    int rear;
    int capacity;

    public:
       
     Queue(int size){

        arr = new int[size];                 //constructor
        capacity = size;
        rear = front = -1;
                     
     }

     void add(int val){
             
        if(rear == capacity -1){
            cout<<"Queue is Full  \n ";
            return ;

        }
            arr[++rear]= val;
            if(front == -1){
                ++front;
            }
        

     }

     void remove(){
        if(front > rear) {
            rear = front = -1;
        }

        if(front== -1){
            cout<<" Queue is Empty";
            return;
        }
        front++;
     }

     bool isEmpty(){
        if(front== -1){
            return true;
        }
        return false;
     }
     void display(){

          if(isEmpty()){

            cout<<"Queue is Empty";
            return;
          }
          for(int i= front; i<=rear; i++){
            cout<<arr[i]<<" ";
          }

     }
    
};

int main(){

    Queue queue(5);
    queue.add(1);
    queue.add(2);
    queue.add(3);
    queue.add(4);
    // queue.add(5);

    cout<<endl;

    queue.display();
    queue.remove();
    queue.display();



}