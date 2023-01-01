#include<iostream>

using namespace std;

class Solution{
    public:
    int floor_logxY(int x, int y){
        if(y<x)
            return 0;
        return 1+floor_logxY(x, y/x);
    }
};

void main(){
    int base;
    int number;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the number whose log base " << base << " needs to be calculated : ";
    cin >> number;

    Solution sol;
    cout << "log of " << number << " base " << base << " is " << sol.floor_logxY(base,number) << endl;
}