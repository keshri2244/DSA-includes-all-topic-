#include<iostream>
using namespace std;

class Node{
    public: 
      int data;
      Node*next;
      

      Node(int val){
        data = val;               //constructor
        next = NULL;
      }
};





class  List{
   public: 
     Node* head;
     Node*tail;

     List(){
        head =NULL;
        tail = NULL;
     }
     void addFront(int val){
         Node*newNode = new Node(val);
         if(head==NULL){
            head  == newNode;
            tail = newNode;
         } 
         else{
            newNode-> next ==head;
            head = newNode;
         }
     }

     void addBack(int val){
        Node*newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail-> next = newNode;
            tail = newNode;
        }
     }

     void deleteFront()
     {
          if(head ==NULL){
            cout<<" List is Empty";
            return;
          }
          else{
            Node*temp =head;
            head = head -> next;
            temp->next =NULL;
            delete temp;
            if(head==NULL){
                tail=NULL;
            }
          }
     }

     void deleteBack(){

        Node*temp =head;
        if(head=NULL){
            cout<<"LIST is empty";

        }
        else if (head == tail){                                    //in case of last  node
            delete head;
            head =tail =NULL;
        }
            else{
            while(temp-> next != tail){
                temp = temp-> next;
            }
            temp-> next =NULL;
            delete tail;
            tail =temp;

        }
     }

     void printList(){
        Node*temp =head;               //BECAUSE IN SINGLE LINKED LIST HEAD CANNOT BE ITRATED
        while(temp != NULL ){
            cout<<temp ->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }
    void search( int key){
    Node* temp = head;

    while(temp !=NULL ){
        if(key == temp-> data){
            cout<<"Element found";
            return;
        }   
    }
    cout<<"Element not found";
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
        newNode->next =temp-> next;
        temp->next = newNode;

        if(newNode-> next == NULL){
            tail = newNode;
        }
    }

  }

};




int main(){
    List list ;
    list.addFront(3);
    list.addFront(2);
    list.addFront(1);

    list.addBack(100);
    list.addBack(200);
    list.addFront(12121);



    list.printList();
    list.deleteFront();
    list.deleteBack();
    cout<<endl;
    list.printList();
    cout<<endl;
    list.search(3);
    list.search(5);
    list.insertPosition(1000,1); 
    list.printList();

}

