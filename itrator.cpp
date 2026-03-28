#include<iostream>
#include<list>
using namespace std;

int main(){
      list<int> l;
      l.push_back(1);
      l.push_back(2);
      l.push_back(3);
      l.push_back(4);



    // list<int> :: iterator it;
    // for(list<int> :: iterator it = l.begin(); it ! = l.end(); it++){
    //     cout<<*it<<"->";
    // }

    for(auto it =l.begin(); it != l.end() ; it++){
        cout<< *it<<" -> ";
    }
}