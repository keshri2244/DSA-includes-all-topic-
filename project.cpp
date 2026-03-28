#include <iostream>
#include<string>
using namespace std ;
    
class student{
     
    int marks;
    string name;
};

   
    public:
//constructor

Student(){
    id =0 ; name ="";age =0 ; course = "";
}

// input student detalis 
void input(){
    cout<<"Entre ID :";
    cin>> id;

    cout<<"Entre name :";
    cin>> name;

    cout<<" entre age :";
    cin>> age ;

    cout <<" Entre course :";
    cin>> course ;
}

// Display student detalis 

void display(){
    cout<<"ID :"<<id<<", Name :"<< name<<",Age:"<<age<<",course"<<course<<endl;
}

int getId(){
    return id;
}

//update student details

void update(){
    cout<<"Entre new name";
    cin>> name;

    cout<< "Entre new age:";
    cin>>age;
    cout<< "Entre new course:";
    cin>>course;
}

};



//----------Global Array------------------
const int MAX = 100;
Student student[MAX];
int studentCount = 0; // number of students




//----------------Function ------------------------------

//Add Student 
void addStudent(){
    if (studentCount >= MAX){
        cout<<"Cannot add more student !\n";
        return;
    }

    student[studentCount].input();
    studentCount++;
    cout<<"Student added successfully! \n:";

}

//Display ALL Students 
void displayStudents()
{
    if(studentCount == 0){
        cout<< "No records found!\n";
        return ;
    }

    for(int i = 0; i<studentCount ; i++)
       student[i].display();
}
 

//Search Student
void searchStudent(){
    int searchId;

    cout<<"Entre Student ID to search :";
    cin>> searchId;
    for(int i = 0;i<studentCount; i++){
        if(student[i].getId()== searchId){
            student[i].display();
            return;
        }
    }

    cout<<"Student not found ! ";
}


//Update Student

void update