#include <iostream>

using namespace std;
class A{public:int a=10;};
class B:virtual public A{};
class C:public B,virtual public A{};
int main(){
    C ob;
    cout<<ob.a;
    return 0;
}            





