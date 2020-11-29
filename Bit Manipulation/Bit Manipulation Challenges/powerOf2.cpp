// Program to check if a given number is power of 2 or not
#include<iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n & n-1));
}

int main(){
    cout << isPowerOf2(8) << endl;
    cout << isPowerOf2(14) << endl;
    return 0;
}