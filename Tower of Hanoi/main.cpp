/*
Problem statement: To transfer the values from stack A to stack C using auxiliary stack B.
                   Given, you can only transfer 1 value at a time.
*/
#include<iostream>
#include<stack>

using namespace std;

class Solution{
    public:
    void towerOfHanoi(int n, stack<int> &a, stack<int> &b, stack<int> &c, char x, char y, char z){
        if(n==1){
            cout << "Moving " << a.top() << " from " << x << " to " << z << endl;
            c.push(a.top());
            a.pop();
            return;
        }
        towerOfHanoi(n-1,a,c,b,x,z,y);
        cout << "Moving " << a.top() << " from " << x << " to " << z << endl;
        c.push(a.top());
        a.pop();
        towerOfHanoi(n-1,b,a,c,y,x,z);
    }
};

void main(){
    stack<int> a,b,c,temp;
    Solution sol;
    int number;
    char ch='Y';

    cout << "Enter elements to push in stack A:" << endl;
    while(ch=='Y' || ch=='y'){
        cout << "Value " << a.size()+1 << ": ";
        cin >> number;
        a.push(number);
        temp.push(number);
        cout << "Continue (Y/N): ";
        cin >> ch;
    }
    
    cout << "Contents of stack A are:" << endl << "_____" << endl << endl;
    while(!temp.empty()){
        cout << temp.top() << endl;
        temp.pop();
    }
    cout << "_____" << endl;

    cout << "C is an empty stack? " << (c.empty() ? "Yes" : "No") << endl;
    cout << "Calling Tower of Hanoi function" << endl;
    sol.towerOfHanoi(a.size(),a,b,c,'A','B','C');

    cout << "Contents of stack C are:" << endl << "_____" << endl << endl;
    while(!c.empty()){
        cout << c.top() << endl;
        c.pop();
    }
    cout << "_____" << endl;
}