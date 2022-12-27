#include<iostream>

using namespace std;

//This solution used Theta(log(n)) time and Theta(1) auxilarly space
class Solution{
    public:
    int power(int x,int n){
        int result=1;
        while(n>0){
            //We use binary exponentiation and if the value of n%2==1 that means the LSB of n is set to 1.
            if(n%2==1)
                result*=x;
            x*=x;
            n/=2;
        }
        return result;
    }
};

void main(){
    int number,power;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power to be calculated: ";
    cin >> power;
    Solution sol;

    cout << number << " raised to " << power << " equals " << sol.power(number,power) << endl;   
}