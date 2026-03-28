// write the program in c++ foe add int and double data type by using function

#include<iostream>
using namespace std;

int addInt(int a, int b){
    return a+b;
}                                                             // we want such a function which can return ant return type ,For this we use Templete

double addDouble(double x, double y){
    return x+y;
}

int main(){
    cout<<addInt(2,5)<<""<<endl;
    cout<<addDouble(2.5,3.5)<<endl;

    return 0;
}