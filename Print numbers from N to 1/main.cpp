#include<iostream>

using namespace std;

class Solution{
    public:
    void printNto1(int number){
        if(number==0)
            return;
        cout << number << " ";
        printNto1(number-1);
    }
};

void main(){
    int number;
    Solution sol;

    cout << "Enter the number: ";
    cin >> number;

    sol.printNto1(number);
    cout << endl;
}