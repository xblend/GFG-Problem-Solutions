#include<iostream>

using namespace std;

class Solution{
    public:
    int sumOfDigits(int n,int sum){
        if(n==0)
            return sum;
        return sumOfDigits(n/10,sum+n%10);
    }
};


void main(){
    Solution sol;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits of " << number << " is " << sol.sumOfDigits(number,0) << endl;
}