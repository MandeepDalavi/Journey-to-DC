#include<iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout<<"Enter no. to reverse: ";
    cin>>n;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10 + lastDigit;
        n /= 10;
    }
    cout<<"Reverse: "<<rev<<endl;
    return 0;
}