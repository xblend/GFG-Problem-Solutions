#include<iostream>

using namespace std;

class Solution{
    public:
    //Euclidean Theorem: For b>a, GCD of a,b equals to GCD of a,b-a
    int gcd(int x,int y){
        return y==0 ? x : gcd(y,x%y);
    }
    int lcm(int x,int y){
        return x*y/gcd(x,y);
    }
};

void main(){
    int x,y;
    cout << "Enter both the number" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    Solution sol;
    cout << "GCD of " << x << " and " << y << " is " <<  sol.gcd(x,y) << endl;
    cout << "LCM of " << x << " and " << y << " is " <<  sol.lcm(x,y) << endl;
}