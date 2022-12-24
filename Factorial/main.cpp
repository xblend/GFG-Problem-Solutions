#include<iostream>

using namespace std;

class Solution{
    public:
    long long int factorial(long long int number){
        if(number==0)
            return 1;
        return number*factorial(number-1);
    }
};

void main(){
    long long int number;
    cout << "Enter number: ";
    cin >> number;
    Solution sol;
    cout << number << "! = "<<sol.factorial(number) << endl;
}