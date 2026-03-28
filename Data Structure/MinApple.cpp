#include<iostream>
using namespace std;


class MinApples{
    public:
      
           int minApples(int M, int K, int N, int S, int W , int E){
                if(M<=S*K){
                    return M;
                }
                else if(M<= S*K + W*1 + E*1){
                    return M;
                }
                else {
                    return -1;
                }
           }
};






int main(){
    MinApples apple;
    int M,K,N,S,W,E;

    cout << "Enter no of total number of apples (M): ";
    cin >> M;

    cout << "Enter number of trees (K): ";
    cin >> K;

    cout << "Enter numbers of trees in North (N): ";
    cin >> N;

    cout << "Enter no of trees in South (S): ";
    cin >> S;

    cout << "Enter no of trees in West (W): ";
    cin >> W;

    cout<<"Entre no of trees in east ";
    cin>>E;

    int ans = apple.minApples(M, K, N, S, W, E);
    cout << "Minimum apple collected "<< endl;

    return 0;

}
