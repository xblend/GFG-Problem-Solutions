#include<iostream>

using namespace std;

class Solution{
    public:
    bool isPrime(int number){
        if(number==2 || number==3)
            return true;
        if(number==0 || number==1 || number%2==0 || number%3==0)
            return false;
        for(int i=5;i*i<=number;i+=6)//incrementing number by 6 as we have already checked conditions with 2 and 3
            if(number%i==0 || number%(i+2)==0)//Checking two conditions
                return false;
        return true;

    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter number: ";
    cin >> number;
    cout << "Is " << number << " a prime? " << (sol.isPrime(number) ? "true" : "false") << endl;
}