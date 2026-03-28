#include<iostream>
using namespace std;



class Shape {
    public:
      virtual void findArea(){
        cout<<"Area of Shape"<<endl;
      }
      virtual void findPerimeter(){
        cout<<"Perimeter of shape"<<endl;
      }
};


class Circle : public Shape{
    double radius;
    public:
    Circle(double r){
        radius =r ;
    }
};

class Rectangle : public Shape {
    double length , width;
    public :
        Rectangle (double l , double w){
            length = l;
            width = w;
        }

        void findArea() override{
            cout<< "Area of Rectangle ="<< length * width << endl;
        }

        void findPerimeter() override {
            cout <<"Perimeter of Rectangle = "<< 2*(length+width)<<endl;
        }
        
};

int main(){
    Shape* s;

    Circle c(5);
    Rectangle r(4,6);


    //Runtime polymorphism for Circle

    s = &c;
    s-> findArea();
    s->findPerimeter();



    cout<<"--------------------------------------"<<endl;


    //Runtime polymorphism for Rectangle

    s =&r;
    s-> findArea();
    return 0;
}

