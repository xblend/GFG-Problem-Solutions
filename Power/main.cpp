#include<iostream>

using namespace std;

class Solution{
    public:
    int power(int x, int n){
        if(n==0)
            return 1;
        int temp = power(x,n/2);
        temp*=temp;
        return ((n%2==0) ? temp : temp*=x);
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