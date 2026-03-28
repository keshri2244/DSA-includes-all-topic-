// in c++ , a list is a sequence container from the Standard templet libraray(STL) that allow non-contiguous memory allocation .
// it is implemented as a (doubly linked list) , where each node stores:
//* The data element
//*A pointer to the previous node
//*A pointer to the next node
//Indwxing nahi hoti hai


// list<int>l;                      //Empty list of integers
// list<string>names;              //Empty list of Strings
// list<int>12={10,20,30};        //List initialized with values 

//Charactersistics of List

// Type --> Doubly Linked List
// Memory - Non --> Contiguous (node are connected by pointers)
// Access Time --> No direct /random access(unlike Vector)
// Insertion / Deletion --> Fast(O(1) if position known)
// Traversal --> Bidirectional iterator supported.




// FUNCTION 

// push_back(x)     list(yes) , vector(yes)
// push_front(x)    list(yes) , vector(no)
// pop_back()       list(yes) , vector(yes)
// pop_front()      list(yes) , vector(no)
// insert(it , x)   list(yes) , vector(yes)









#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l ={10,20,30,40};

    //insert elements
    l.push_front(5);
    l.push_back(50);

    cout<<"List elements ";
    for(int val: l)
       cout<<val<<" ";
   
   cout<<"\n Front element :"<<l.front();
   cout<<"\n Back element :"<<l.back();

   //Remove element

   l.pop_front();
   l.pop_back();

   cout<<"\n After pop operation";
   for(int val : l)
      cout<<val<<" ";


      //Sorting
      l.sort();
      cout<<"\nAfter sorting: ";
      for(int val: l)
         cout<<val<<" ";

      //Reverse
      
      l.reverse();
      cout<<"\nAfter reversing";
      for(int val: l)
        cout<<val<<" ";


       
}