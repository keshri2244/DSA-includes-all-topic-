#include<iostream>
using namespace std;

class Node{
    public:
      int data;
       Node*next;

       Node(int val){
        data = val;                                         //constuctor
        next =NULL;                                          
       }
};

class Circular{
    public:
       Node*head;
       Node*tail;

       Circular(){
        head = tail =NULL;
       }


       void addFront(int val){
        Node* newNode = new Node(val);
        if(head ==NULL){
            head = newNode;
            tail = newNode;
            tail -> next = head;

        }
        else{
            newNode -> next = head;
            head = newNode;
            tail->next = head;
        }
       }


       void addBack(int val){

        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            tail-> next= head;
        }
        else{
            newNode -> next = head;
            tail->next = newNode;
            tail= newNode;
        }
       }

       void deleteFront(){
           if(head ==NULL){
            cout<<"Empty list";
           }
           else if(head == tail){
            delete head;
            head =  tail = NULL;
           }
           else{

                 Node * temp = head;
                 head = head->next;
                 tail->next = head;
                 temp -> next = NULL;
           }

       }
       void deleteBack(){
        if(head == NULL){
            cout<<"List is Empty";

        }
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }

        else {
            Node* temp = head;
            while (temp->next != tail)
            {
                temp = temp-> next;
            }
            delete tail;
            tail = temp;
            tail-> next = head;

        }
       }


       void printList(){
        if(head == NULL){
            cout<<"List is Empty";
        }
        else{
            cout<<head-> data;
            Node*temp = head -> next;
            while(temp != head){
                cout<<temp->data<<"->";
                temp =temp->next;
            }
            cout<<"HEAD";
        }
       }

   
};


int main()
{
    Circular list;
    list.addFront(3);
    list.addFront(2);
    list.addFront(1);

    list.printList();
}