// Vector 

// What is a vector in C++ ?

// A vector is a dynamic array provide by the c++ Standard Template Libraray(STL)
// it can change its size automatically when elements are inserted or deleted , unlike normal array which have a fixed size
// it is defined in the <vector> header

// v.size() -> Returns number of element present
// v.capacity() -> Returns total allocated memory capaciti
// v.resize() -> Changes size to n
// v.empty() ->Returns true if vector is empty

// vector<int>v2(v1)  copy constructor
// vector<int>v2= v1   copy assignment
// vector<string>names = ("Rahul","Aman","Dhoni");  initization list 








#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
                                                  //capaciti size se ek jyada rahega

    v.push_back(4);

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    // v.resize();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v2(5);
    for(int i= 0 ; i <v2.size(); i++){
        cout<<v2[i]<<" ";
    }

    cout<< endl;

    vector<int> v3(5,10);
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }


}