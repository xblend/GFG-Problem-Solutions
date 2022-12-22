#include<iostream>
#include<string>

using namespace std;

class Solution{
    private:
        int result[2]={0,0};
    public:
        int* twoOddOccuringNumbers(int array[],int size){
            int xor2 = 0;
            //Find the xor of all elements
            for(int i=0;i<size;i++){
                xor2^=array[i];
            }
            //xor2 equals xor of 2 odd occuring numbers
            int setBit = xor2 & ~(xor2-1);
            /*xor of 2 odd occuring numbers will have the 
            

            
            based on which array could be divided in 2 groups*/
            //separate the array in 2 groups based on the rightmost set bit
            for(int i=0;i<size;i++){
                if((array[i]&setBit)==0)
                    result[0]^=array[i];
                else
                    result[1]^=array[i];
            } 
            return result;
        }
};

void main(){
    Solution sol;
    int array[12]={1,2,2,3,3,3,5,5,4,4,3,5};
    int size = 12;
    int *result=sol.twoOddOccuringNumbers(array,size);
    cout << "The two odd occuring numbers in the given array: [";
    for(int i=0;i<size;i++)
        cout << array[i] << (i==(size-1) ? "" : ",");
    cout << "] are " << result[0] << " and " << result[1] << endl;
}