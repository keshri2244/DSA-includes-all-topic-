// Runtime polymorhism means the decision of which function to call is made at runtime , not at compile time.

//Achieved using:
// .Virtual Function (in base case)
//.Function overriding (in derived class)
//.Base class pointer / reference pointer to a derived class object.

#include<iostream>
using namespace std;


class Animal {
    public : 
    virtual void Sound(){
        cout<<"Animal sound \n";
    }
};

class Dog : public Animal {
    public:
    void Sound (){
        cout<<"Dog Sound \n";
    }
};

int main(){
    Animal*a;
    a = new Dog();       // here heap pe dog object create ho raha hai jo ki runtime pe execute hoga tab tak code compile time pe execute ho jyaga
    a->Sound();          // runtime pe execute karne k liye function k aage virtual likh denge  , vo function me likhege jisko inherit kar raha hai
    return 0;            
}


//Virtual Funtion 

// A virtual function is a member function in the base class that is declared with the keyword virtual.
//.It allows the derived class to override it.
//. When accessed using a base class pointer / reference , the derived version executes at runtime