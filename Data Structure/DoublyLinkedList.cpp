#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node *next;
       Node *prev;

       Node(int val){
        data = val;               // contrustor
        next = NULL;
        prev = NULL;
       }
};

class DoubleList{
    public:  
        Node*head;
        Node*tail;
        DoubleList(){                                  
            head =tail =NULL;            //constructor         , at first head and tail should be at NULL
        }

        void addFront(int val){
            Node*newNode = new Node(val);
            if(head==NULL){
                head =newNode;
                tail=newNode;
            }
            else{
                newNode->next=head;
                head->prev=newNode;
                head=newNode;
            }
        }

        void addBack(int val){
            Node*newNode=new Node(val);
            if(head=NULL){
                head =newNode;
                tail = newNode;
 
            }
            else{
                tail->next=newNode;
                newNode->prev= tail;
                tail=newNode;
            }
        }

        void printList(){
            if(head==NULL){
                cout<<"List is empty";
            }
            else{
                Node *temp =head;
            while(temp!= NULL){
                cout<<temp->data<<"->";
                temp= temp->next;
            }
            cout<<"NULL";
        }
    }

   void printReverse(){
    if(head ==NULL){
        cout<<"liSt is empty";
    }
    else{
        Node*temp = tail;
        while(temp !=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->prev;
        }
        cout<<"NULL";
    }
   }
    


   void deleteFront(){

      if(head ==NULL){
        cout<<"List is Empty";
        return;
      }
      else if(head ==tail){
        delete head;
        head = tail =NULL;

      }
      else{
        Node*temp =head;
        head= head->next;
        temp->next =NULL;
        head->prev=NULL;
        delete temp;
      }
   }


   void deleteBack(){
    if( head == NULL){
        cout<<"List is empty";
        return;
    }
    else if(head ==tail){
        delete head;
        head= tail =NULL;
    }
    else{
        Node*temp =tail;
        tail =tail -> prev;
        tail->next =NULL;
        temp -> prev =NULL;
        delete temp;


        
    }
   }


   void insertPosition(int val, int pos){
    if(pos<0){
        cout<<"Invalid Position";
        return ;

    }
    else if(pos==0){
        addFront(val);
        return;
    }
    else{
        Node*temp = head;
        for(int i=0 ;i<pos-1; i++){
            if(temp==NULL){
                cout<<"Invalid Range";
                return ;
            }
            temp = temp -> next;
        }
        Node*newNode =new Node(val);
        newNode ->next =temp -> next;
        newNode->prev = temp;
        temp->next = newNode;

        if(temp-> next !=NULL){

            temp-> next-> prev = newNode;
        }else{
            tail = newNode;
        }
    }

  }

            
};




int main(){
    DoubleList list;
    list.addFront(3);
    list.addFront(5);
    list.addFront(6);
    list.printList();

    cout<<endl;

    list.printReverse();

    cout<<endl;
    list.deleteBack();


    cout<<endl;
    list.insertPosition(5,4);
}


