#include<iostream>

using namespace std;

class Solution{
    public:

    void fibonacciSeries(int N,int first, int second){
        cout << first << " ";
            if(N<=1){
                return;
            }
            fibonacciSeries(N-1,second,first+second);
        }
    int fibonacci(int N){
            if(N<=1){
                return N;
            }
            return fibonacci(N-1) + fibonacci(N-2);
        }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter the value of N: ";
    cin >> number;
    cout << "Fibonacci series with " << number << " elements is ";
    sol.fibonacciSeries(number,0,1);
    cout << endl;
    cout << number << "(st/nd/th) element of Fibonacci series is ";
    cout << sol.fibonacci(number-1) << endl;
    
}