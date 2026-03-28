#include<iostream>
#include<string>
using namespace std;

int main () {
    try{
        int x = stoi("abc"); //cannot convert string to int
        cout<< x<< endl;

    }catch(const invalid_argument& e){
        cout<< e.what()<<endl;
    }
}


