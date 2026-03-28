#include<iostream>
using namespace std;

class Node{

public:
   int data ;
   Node*next;
   Node*prev;

   Node(int val){
    data = val;
    next = prev = NULL;                         // constructor
   }

};

class DoubleCircular{
     
    public:
        
      Node*head;
      Node*tail;

      DoubleCircular(){
        head=tail=NULL;                       //constructor

      }


      void push(int val){

        Node*newNode = new Node (val);
        if(head == NULL){
            head = newNode;
            tail = newNode;                                 
            head-> next = head;
            head-> prev = head;
            return ;
        }
     
        newNode-> next = head;
        newNode-> prev= tail;
         tail-> next =  newNode;
         head -> prev=  newNode;
         head = newNode;
         
      }
      

      void pushBack(int val){
        Node*newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;                                 
            head-> next = head;
            head-> prev = head;
            return ;
        }
        newNode-> next = head;
        newNode -> prev = newNode;
        tail-> next = newNode;
        head-> prev = newNode;
        tail = newNode;
      }

void dispaly(){


    if(head ==NULL){
        cout<<"List is empty";
    }
    cout<<head->data<<"<=> ";
    Node*temp = head-> next;
    while(temp   != head ){
        cout<<temp->data<<"<=> ";
        temp= temp-> next;
    }
     
     cout<<"HEAD";
}

  void reverse(){
    if(head ==NULL){
        cout<<"List is empty";
        return;
    }
     cout<<tail->data<<" <=>";
     Node*temp = tail->prev;
     while(temp != tail){
        cout<<temp-> data<<"<=> ";
        temp = temp -> prev;
     }

   cout<<"TAIL";

  }

  void deleteFront(){

      if(head ==NULL){
        cout<<"List is Empty";
        return;
      }
      else if(head == tail){
        delete head;
        head=tail=NULL;
        return;
      }

      Node*temp =head;
      head= head-> next;
      head->prev = tail;
      tail-> next = head;
      delete temp;
  }

  void deleteBack(){
     if(head ==NULL){
        cout<<"List is Empty";
        return;
      }
      else if(head == tail){
        delete head;
        head=tail=NULL;
        return;
      }

      Node*temp = tail;
      tail=tail->prev;
      tail->next = head;
      head-> prev = tail;
      delete temp;

  }

   void search( int key){

    if(head ==NULL){
        cout<<"List is Empty";
        return;
      }
      else  { 

        head-> data == key;
        cout<< head -> data <<"element found";

      }

    Node* temp = head->next;
    while(temp != head ){
        if(key == temp-> data){
            cout<<"Element found";
            return;
        }   
    }
    cout<<"Element not found";
}


};

int main(){
    DoubleCircular list;
    list.push(5);
    list.push(6);
    list.push(7);
    list.push(8);
    list.push(9);
    list.push(10);
    list.push(11);


    list.dispaly();
    cout<<endl;

    list.reverse();
    list.dispaly();


}


