#include<iostream>
#include<string.h>

using namespace std;

class Solution{
    public:
    bool isPalindrome(string str, int start, int end){
        if(start>=end)
            return true;
        return (str[start]==str[end]) && isPalindrome(str, start+1, end-1);
    }
};


void main(){
    string str;
    Solution sol;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Is string " << str << " palindrome? " << (sol.isPalindrome(str,0,(str.length()-1)) ? "true" : "false") << endl;
}