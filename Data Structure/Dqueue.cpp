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

        bool isFull(){
           return (front == 0 && rear == capacity - 1) || (front == rear + 1);
        

        }

        bool isEmpty(){
            return front == -1;

        }

        void pushFront(int val){
            if(isFull()){
                cout<<"Queue is Full\n";
                return;
            }
            if(front == -1){
                front = rear = 0;
            }
            else if(front == 0){
                front = capacity-1;
            }else{
                --front;
            }
            arr[front]= val;
        }

        void pushBack(int val){
            if(isFull()){
                cout<<"Queue is Empty\n";
                return;
            }
            if(front== -1){
                front = rear =0;
            }
            else if(rear==capacity-1){
                rear =0 ;
      
            }
            else {
                ++rear;
            }
            arr[rear]= val;
        }
        
        
      void dispaly(){
        if(front==-1){
            cout<<"Queue is Empty\n";
            return;
        }
        int i= front;
        while(i != rear){
            cout<<arr[i]<<" ";
            i = (i+1)% capacity;
        }
        cout<<arr[rear]<<" ";
        cout<<endl;

      }

      void insertRear(int val){

        if(isFull()){
                cout<<"Queue is Empty\n";
                return;
            }
            if(front == -1){
                front = rear =0;

            }
            else if(rear == capacity-1){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear]= val;

      }

      void DeleteFront(){
          if(isFull()){
                cout<<"Deque is Empty\n";
                return;
            }
            cout<<"Deleted : "<< arr[front]<<endl;
            if(front == rear)
               front = rear = -1;

            else if(front == capacity -1)
               front = 0;
               
             else 
                front++;  

      }
      void deleteRear(){
        if(isEmpty()){
            cout<<"Deque is Empty\n";
            return;
        }
        cout<<"Deleted :"<<arr[rear]<<endl;
        if(front == rear)
          front = rear = -1;

        else if(rear == 0)  
           rear = capacity-1;

        else 
           rear--;   
      }
      
};

int main(){

    Queue queue(5);
    queue.pushBack(5);
    queue.pushBack(6);
    queue.pushBack(7);
    queue.pushBack(8);
    queue.pushBack(9);
    
    queue.dispaly();   
}
