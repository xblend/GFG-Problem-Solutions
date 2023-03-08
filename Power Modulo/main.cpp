#include<iostream>

using namespace std;

class Solution{
    public:
    //(a*b) mod m = ((a mod m) * (b mod m)) mod m
    long long power(int N,int R)
    {
       //Your code here
       if(R==0){
           return 1;
       }
       long long temp = power(N,R/2)%1000000007;
       temp = (temp*temp)%1000000007;
       return (R%2==0 ? temp : (temp*N%1000000007)%1000000007);
    }
};

void main(){
    Solution sol;
    cout << sol.power(4,4);
}