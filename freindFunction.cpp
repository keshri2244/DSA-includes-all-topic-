// #include<iostream>
// using namespace std;

// class A{
//     private:
//      friend void check();
// };

// void check(){
//     cout<<"Cheching this function is working";
// }
// int main(){
//     check();
//     return 0;
// }




#include<iostream>
using namespace std;

class Triangle{
    private :
      int h;
      int l;

      public:
        Triangle (int l , int h){
            this -> l=l;                          //constructor
            this -> h=h;
        }

        friend void area(Triangle triangle);

        
};

void area(Triangle triangle){
    double areaofTriangle = 0.5*triangle.h*triangle.l;
    cout<<"Area of Triangle is:"<<areaofTriangle;
}

int main(){
    Triangle t(2,3);
    area(t);

    return 0 ;
}