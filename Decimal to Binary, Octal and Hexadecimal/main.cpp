#include<iostream>

using namespace std;

class Solution{
    public:
    void decimal2binary(int number){
        if(number==0)
            return;
        decimal2binary(number/2);
        cout << number%2;
    }
    void decimal2octal(int number){
        if(number==0)
            return;
        decimal2octal(number/8);
        cout << number%8;
    }
    void decimal2hexadeciaml(int number){
        if(number==0)
            return;
        decimal2hexadeciaml(number/16);
        int temp = number%16;
        switch(temp){
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << temp;
        }
        
    }
};

void main(){
    int number;
    Solution sol;
    cout << "Enter the number: ";
    cin >> number;
    
    cout << number << " in binary format: ";
    sol.decimal2binary(number);
    cout << endl;

    cout << number << " in octal format: ";
    sol.decimal2octal(number);
    cout << endl;


    cout << number << " in hexadecimal format: ";
    sol.decimal2hexadeciaml(number);
    cout << endl;


}