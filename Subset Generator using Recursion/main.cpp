#include<iostream>
#include<string>

using namespace std;

class Solution{
    public:
    void genSubset(string str,string curr, int index, int size){
        if(index==size){
            cout << ( curr=="" ? "{}" : curr ) << " ";
            return;
        }
        genSubset(str,curr+str[index],index+1,size);
        genSubset(str,curr,index+1,size);
    }
};

void main(){
    string str;
    Solution sol;
    cout << "Enter a string with distinct characters: ";
    cin >> str;

    int size=str.length();
    sol.genSubset(str,"",0,size);
}