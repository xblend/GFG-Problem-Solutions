#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    void soe(int N){
        if(N<=1)
            return;
        vector<bool> vec(N+1,true);
        cout << "Prime numbers from 2 to " << N << " is/are:" << endl;
        for(int i=2;i*i<=N;i++)
            if(vec[i]){
                for(int j=i*i;j<=N;j+=i)
                    vec[j]=false;
            }
        for(int i=2;i<=N;i++)
            if(vec[i])
                cout << i << " ";
        cout << endl;
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter number: ";
    cin >> number;
    
    clock_t start, end;
    /* Recording the starting clock tick.*/
    start = clock();
    sol.soe(number);
    // Recording the end clock tick.
    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time take: " << time_taken << endl;
}