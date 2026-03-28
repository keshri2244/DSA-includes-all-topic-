#include<iostream>
#include<vector>
using namespace std;

class Stack{

     vector<int> v;

     public:
        void push (int val){
               
           v.push_back(val);

        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty";
                return;
            }
               
            v.pop_back();
        }

        bool isEmpty(){
            if(v.size() == 0){
                return true;
            }   

            else {
                return false ;
            }

        }
        void top(){
            if(isEmpty){
                cout<<"Stack is empty";
                return;
            }

           v.back();
        }

};
