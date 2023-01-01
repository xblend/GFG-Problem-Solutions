#include<iostream>

using namespace std;

class Solution{
    public:
    int sumOfN(int number,int k){
        if(number<1)
            return k;
        return sumOfN(number-1,k+number);
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Sum of " << number << " is " << sol.sumOfN(number,0) << endl;
}
