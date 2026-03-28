//without Exception Handling (Division by zero )

#include<iostream>
using namespace std;

int main (){
    cout<< "hello"<<endl ;

    int a = 12 , b =0, r=0;

    try{  
        if(b==0)
           throw runtime_error("Division by zero"); //throwing an exception

           r= a/b;
           cout<<"Division:"<<r<<endl;
    } 
    
}

