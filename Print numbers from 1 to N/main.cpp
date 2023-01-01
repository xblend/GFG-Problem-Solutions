#include<iostream>

using namespace std;

class Solution{
    public:
    void print1toN(int N, int K){
        if(N==0)
            return;
        /*
        print1toN(N-1);
        cout << N << " ";
        */
       //Making code tail recursive so that code takes Theta(1) auxilary space
       cout << K << " ";
       print1toN(N-1,K+1);
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter the number: ";
    cin >> number;

    sol.print1toN(number,1);
    cout << endl;
}