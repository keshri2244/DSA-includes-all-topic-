//Create a student class with private data  member : roll No, name, and a vector<int> for marks.
//. Add methods to:

// . input student details and marks
// cal ukate average marks
// Display student info

#include<iostream>
#include<vector>
using namespace std;


class student {
      private :
      string rollno , name;
      vector<int>marks;

      public:
      int temp;
          void accept()
          {
            cout<<endl<<"Entre roll ";
            cin>>rollno;
            cout<<endl<<"Entre name";
            cin>>name;
            cout<<endl<<"Entre Marks for Physics";
            cin>>temp;
            marks.push_back(temp);
            cout<<endl<<"Entre Marks for Chemistry";
            cin>>temp;
            marks.push_back(temp);
            cout<<endl<<"Ente marks for maths";
            cin>>temp;
            marks.push_back(temp);
          }

          void calcavgdispaly(){
            int avg ;
            for(int i = 0; i< marks.size(); i++){
                avg+= marks.at(i);

            }
            avg = avg/3;
            cout<<endl<<"Roll no ="<<rollno;
            cout<<endl<<"Name ="<<name;
            cout<<endl<<"Average ="<<avg;

          }
};

int main(){
    student s1;
    s1.accept();
    s1.calcavgdispaly();
    return 0;
}


