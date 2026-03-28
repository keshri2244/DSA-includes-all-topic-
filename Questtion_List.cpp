//Merge two sorted lists and remove duplicates
//List1 ={1,3,5,7}
//List2 ={ 2,3,6,7,8}
//Merge both lists using merge()
//Remove duplicates using unique()
//print the final list




#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1= {1,3,5,7};
    list<int> l2 ={2,3,6,7,8};

    l1.merge(l2);
    l1.unique();
    cout<<"list of elements:";
    for(int val : l1)
      cout<<val<<" ->";

      cout<<endl;

      for(auto it = l1.begin(); it != l1.end(); it++){              //using itrator
        cout<<*it<<"->";
      }

      cout<<endl;

      cout<<"HI"<<endl;
      for(int val : l2){
          cout<<val<<"->";
      }

      cout<<"Bye";
      
      cout<<endl;   
     
 cout<<l2.size()<<" ";     //0
}
