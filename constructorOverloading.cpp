
  

  //Addition

// #include <iostream>
// using namespace std;

// class Complex{

//     int real;
//     int img;

//     public :
//             Complex(){ }
//             Complex(int r, int i){
//                 this ->real = r;
//                 this -> img=i;
//             }
            
//             void display(){
//                 cout<<real <<"i"<<img<<endl;
//             }
//             Complex operator + (Complex &c){
//                 Complex ans;
//                 ans.real= real + c.real;
//                 ans.img= img +c.img;
//                 return ans ;
//             }
// };



// int main(){
//     Complex c1(8,12);
//     Complex c2(6,7);
//     Complex c3 = c1+c2;
//     c3.display();
    

//     return 0;
    
// }





// Subtraction

// #include <iostream>
// using namespace std;

// class Complex{

//     int real;
//     int img;

//     public :
//             Complex(){ }
//             Complex(int r, int i){
//                 this ->real = r;
//                 this -> img=i;
//             }
            
//             void display(){
//                 cout<<real <<"i"<<img<<endl;
//             }
//             Complex operator - (Complex &c){
//                 Complex ans;
//                 ans.real= real - c.real;
//                 ans.img= img -c.img;
//                 return ans ;
//             }
// };



// int main(){
//     Complex c1(8,12);
//     Complex c2(6,7);
//     Complex c3 = c1-c2;
//     c3.display();
    

//     return 0;
    
// }



// multiplication

#include <iostream>
using namespace std;

class Complex{

    int real;
    int img;

    public :
            Complex(){ }
            Complex(int r, int i){
                this ->real = r;
                this -> img=i;
            }
            
            void display(){
                cout<<real <<"i"<<img<<endl;
            }
            Complex operator * (Complex &c){
                Complex ans;
                ans.real= (real*c.real)-(c.img*img);   // (a+bi)(c+di) = (ac-bd)+(ad+bc)i
                ans.img=(real*c.img)+(c.real*img);
                return ans ;
            }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1*c2;
    c3.display();

    return 0;
    
}


