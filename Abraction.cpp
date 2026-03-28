// Defination 


// *An abstract class in c++ is a class that cannot be instantiated (you cannot create objects of it).
// *It is designed to be a base class for other classes .
// * it contains at least one pure virtual function .
// object create nahi hota hai abstract class ka.


// *Abtraction is the process of hiding implementation details and showing only the essential features of an object .
// * Focuses on what an object does , not on how it does it.
// *Example:
// Car -> User presses acclerator , but doesn't need to know how the engine works . 

//Need of Abstraction 

// * Reduces complexity of code.
// * Increase code resueability and readability.
// *Helps in security by exposing only necessary details.

// This pointer 
// *this pointer is an implicit pointer avaiable inside all member function of a class .
// * it refers to the current object of the class .

// Pure Virtual fUNCTION 

// * A virtual function with no definition = 0 to end.
// * Makes a class abstract .
// *Must be override in derived class , otherwise derived class also become abstract.

#include<iostream>
using namespace std;

class Shape {
    public:
         Shape(){
            cout<<"Shape constructor called "<< endl;
         }

         virtual void draw() =0;
};

class Circle : public Shape{
    public:
         Circle(){
            cout<<"Circle constructor called "<<endl;
         }

         void draw() override{
            cout<< "Drawing a circle "<< endl;
         }
         
};

int main(){
    //Shape s; //Not allowed 

    Shape*s;
    Circle c;
    c.draw();

    cout<<"---------------------------------"<<endl;
    s=&c;
    s-> draw();

    return 0;
}
