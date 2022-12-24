#include<iostream>

using namespace std;

class Solution{
    public:
    bool isPalindrome(int number){
        number = abs(number);
        int temp = number;
        int reverse = 0;
        if(number>=0 && number<=9)
            return true;
        while(temp!=0){
            reverse=((reverse*10)+(temp%10));
            temp/=10;
        }
        return reverse==number;
    }
};

void main(){
    Solution sol;
    cout << "Enter the number: ";
    int number;
    cin >> number;
    cout << "Is " << number << " palindrome? " 
    << (sol.isPalindrome(number) ? "true" : "false") << endl;
}