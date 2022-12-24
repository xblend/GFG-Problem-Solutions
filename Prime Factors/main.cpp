#include<iostream>

using namespace std;

class Solution{
    public:
    void primeFactors(int number){
        if(number<=1)
            return;
        cout << "Prime factors of " << number << " are: " << endl;
        while(number%2==0){
            cout << "2 ";
            number/=2;
        }
        while(number%3==0){
            cout << "3 ";
            number/=3;
        }
        for(int i=5;i*i<=number;i+=6){
            while(number%i==0){
                cout << i << " ";
                number/=i;
            }
            while(number%(i+2)==0){
                cout << i+2 << " ";
                number/=(i+2);
            }
        }
        if(number>1)//If number remains greater than 1 that would be the greatest single powered prime factor of the numnber parsed
            cout << number << " ";
        cout << endl;

    }
};


void main(){
    Solution sol;
    int number;
    cout << "Enter the number: ";
    cin >> number;
    sol.primeFactors(number);
}