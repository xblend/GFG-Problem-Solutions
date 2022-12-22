#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    //Time complexity O(n*2^n)
        void powerSetGenerator(char* array, int size){
            int members = pow(2,size);
            string str="";
            cout << "Power set values are:" << endl;
            cout << "{}" << endl;
            for(int i=1;i<members;i++){
                for(int j=0;j<size;j++)
                    if(((1<<j)&i)!=0)
                        str+=array[j];
                cout << str << endl;
                str="";
            }
        }
};

void main(){
    char array[3]={'a','b','c'};
    int size = 3;
    Solution sol;
    sol.powerSetGenerator(array,size);
}