#include<cmath>
#include<iostream>

using namespace std;


class Solution{
    public:
    int countSetBits(int n){
        int count = 0;
        int flips = 0;
        int set_bits = 0;
        int power = 0;
        
        for(int i=0;i<=(int)log2(n);i++){
            power = 1<<i;
            flips=n/power; //Calculate the number of flips that would occur in ith bit
            if(flips%2==0){ 
                //If the number of flips are even then we get number of set ith bits as (flips/2)*(2^i)
                //Because the flips having ones occur once in every 2 flips
               set_bits = (flips/2)*power;
            }
            else{
                //If the number of flips is odd we conclude that we have incomplete ones set in the ith bit column 
                //We calculate the complete set of ones by doing (flips/2)*(2^i)
                //For remaining we calculate the numbers of bit set in an incomplete set of ones (power-((flips+1)*power-1-n)) in the ith column
               set_bits = ((int)(flips/2))*power;
               set_bits+=(power-((flips+1)*power-1-n));
            }
            count+=set_bits;
        }
        return count;
    }
};

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;
    Solution obj;
    cout << "The number of set bits from 1 to "<< number << " is " << obj.countSetBits(number) <<"\n"; 
}

