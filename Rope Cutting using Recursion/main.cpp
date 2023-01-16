/*
Problem Statement:
Given length of rope as n, we need to find the number of maximum cuts that can be made using lengths of either a, b or c.
*/
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

//Time complexity using the recursive solution is O(3^n)
class Solution{
    public:
    int maxCuts(int n, int a, int b, int c){
        if(n==0)
            return 0;
        if(n<0)
            return -1;
        int result = max({maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)});
        if(result==-1)
            return -1;
        return result+1;
    }
};

void main(){
    int n,a,b,c;
    Solution sol;

    cout << "Enter the length of rope: ";
    cin >> n;
    cout << "Enter the lengths of" << endl << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    int result = sol.maxCuts(n,a,b,c);

    cout << "Maximum cuts that can be made for rope of length " << n << " from lengths " 
        << a << ", " << b << " and " << c << " is " << (result==-1 ? "not possible!" : to_string(result)) << endl;
}