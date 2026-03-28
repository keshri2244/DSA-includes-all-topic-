#include<iostream>
using namespace std;

 template<typename T>
 T add(T a, T b)
 {     return a+b;

 }

int main(){
   cout<<add(2,3)<<" ";                                //5
     cout<<add(2.3,3.3)<<" ";                            //5.6
    cout<<add('a','a')<<"";                            //T         returns accai value 
    cout<<add(234,324)<<" ";                               //558
cout<<add(string("rahul"),string("keshari"));                  


   return 0;                                        // dono argument same type ka hona chaiye   




template<typename T1 , typename T2 >
 auto add(T1 a , T2 b) -> decltype(a+b){                  // auto kueki hame pata nahi hai ki kon sa data type return karna hai
    return a+b;
 }                               


 int main(){

    cout<<add(2,3.5)<<" ";
    cout<<add('a',2)<<" ";
    // cout<<add(string("h"), 1)<<" "; error

 }
    
