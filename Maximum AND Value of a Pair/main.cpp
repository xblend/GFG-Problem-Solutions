#include<iostream>

using namespace std;

class Solution{
    private:
        int checkBit(int pattern,int* array,int size){
            int count = 0;
            //Loop to check how many elements in the array have the parsed pattern
            for(int i=0;i<size;i++)
                if((pattern&array[i])==pattern)
                    count+=1;
            return count;
        }
    public:
        int checkMaxANDValue(int* array, int size){
            int res=0,count=0;

            for(int bit=31;bit>=0;bit--){
                count = checkBit(res | (1<<bit),array,size);
                if(count>=2)
                    res|=(1<<bit);
            }
            return res;
        }
};

void main(){
    int array[4] = {12,8,20,10};
    int size = 4;
    Solution sol;
    cout << "The maximum AND value of a pair in : [";
    for(int i=0;i<size;i++)
        cout << array[i] << (i==(size-1) ? "]" : ",");
    cout << " is " << sol.checkMaxANDValue(array,size) << endl;
}