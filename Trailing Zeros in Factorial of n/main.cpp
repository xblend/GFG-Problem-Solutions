#include<iostream>

using namespace std;

class Solution{
    public:
    int trailingZerosInFactorial(int number){
        int result=0;
        while(number!=0){
            result+=(int)(number/5);
            number/=5;
        }
        return result;
    }
};


void main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    Solution sol;
    cout << "Number of trailing zeros in " << number << "! is/are " << sol.trailingZerosInFactorial(number) << endl;
}