#include<iostream>
using namespace std;


// template<class T>
// class Myclass{
//     T name;
//     T course;

//     public :
//            void set_name(T name){
//              this -> name = name;

//            }
//            void set_cours(T coures){

//             this-> course =course;
//            }

//            T get_name(){
//             return name;
//            }

//            T get_course(){

//             return course;

//            }
// };

// int main(){

//     Myclass<string> Myclass;
//     Myclass.set_name("Rahul");
//     Myclass.set_cours("Computer");

//     cout<<Myclass.get_name()<<endl;
//     cout<<Myclass.get_course()<<endl;

//     cout<<endl;

    
// }




template<class T, class U>
class Myclass{
    T name;
    U course;
    T school;

    public:
          void set_name(T name){
            this -> name= name;
          }

          void set_course(U course){
            this -> course = course;
          }

          void set_school( T school){
            this -> school = school;
          }

          T get_name(){
            return name;
          }

          U get_course(){
            return course;
          }

          T get_school(){

            return school;
          }

};

int main(){
    Myclass<string, int>Myclass;

    Myclass.set_name("Rahul");
    Myclass.set_course(5);
    Myclass.set_school("abc");


    cout<<Myclass.get_name()<<endl;
    cout<<Myclass.get_course()<<endl;
    cout<<Myclass.get_school()<<endl;
    
}
