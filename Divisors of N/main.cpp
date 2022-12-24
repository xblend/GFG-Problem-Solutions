#include<iostream>

using namespace std;

class Solution{
    public:
    void divisors(int N){
        cout << "Divisors for " << N << " are: " << endl;
        
        for(int i=1;i*i<N;i++)
            if(N%i==0)
                cout << i << " ";
        for(int i=sqrt(N);i>=1;i--)
            if(N%i==0)
                cout << N/i << " ";
        cout << endl;
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter number: ";
    cin >> number;
    sol.divisors(number);
}