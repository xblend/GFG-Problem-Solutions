#include<iostream>

using namespace std;

class Solution{
    public:
    void print1toN(int N){
        if(N==0)
            return;
        print1toN(N-1);
        cout << N << " ";
        
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter the number: ";
    cin >> number;

    sol.print1toN(number);
    cout << endl;
}