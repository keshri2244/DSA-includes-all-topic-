#include<iostream>
using namespace std;
#include<string>

class Student{

    private:
       int marks;
       string name;


       friend class Teacher;

       public :
         Student(string name , int marks){
            this -> marks = marks ;
            this-> name = name;
         }
};


class Teacher {

    public:
     void diapalyResult(Student s){
        // cout<<"Student Name :"<<s.name<< endl;
        // cout<<"Marks"<<s.marks<< endl;
        if(s.marks>=40){                                // by default ye private hai isliye public likhe ge
            cout<< s.name <<"Result pass\n"<<endl;
        }

        else{
            cout<<s.name<<"Fail"<<endl;;

        }
    }
};


int main (){

    
    Student s1("Rahul  \n", 100);
    Student s2("Keshari \n ",99);


    Teacher teacher ;
    teacher.diapalyResult(s1);
    // cout<<endl;
    teacher.diapalyResult(s2);

    return 0;


}