#include<iostream>
#include<vector>
using namespace std;
                                        //print element in reverse order
int main(){

    int n;
    cout<<"enter the size";
    cin>> n;

    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Entre the value :"<<endl;
        cin>>x;
        v.push_back(x);
    }


    for(int i= n-1 ; i>=0; i--){
        cout<<v[i]<<" ";
    }

}





