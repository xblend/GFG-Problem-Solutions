#include<iostream>

using namespace std;

class Solution{
    public:
    /*
    long long int factorial(long long int number){
        if(number==0)
            return 1;
        return number*factorial(number-1);//This is not tail recursive because the function call stack needs to be stored inorder to need the return value.
    }
    */
   //Making factorial code tail recursive
   //A tail recursive function take Theta(1) auxilarly space
   long long int factorial(long long int number,long long int k){
        if(number==0)
            return k;
        return factorial(number-1,k*number);
    }

};

void main(){
    long long int number;
    cout << "Enter number: ";
    cin >> number;
    Solution sol;
    cout << number << "! = "<<sol.factorial(number,1) << endl;
}