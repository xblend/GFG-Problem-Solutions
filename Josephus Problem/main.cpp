#include<iostream>

using namespace std;

class Solution{
    public:
    int josephusProblem(int n, int k){
        if(n==1)
            return 0;
        
        return (josephusProblem(n-1,k)+k)%n;
    }
};

void main(){
    int n,k;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;

    Solution sol;

    cout << "The survivor is " << sol.josephusProblem(n,k) << endl;
}