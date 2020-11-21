#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter any number: ";
    cin>>n;
    int originNum = n;
    while (n>0){
         int lastDigit = n%10;
         sum = sum + powf(lastDigit, 3);
         n = n/10;
    }
    if(sum == originNum)
        cout<<"Given no. is Armstrong"<<endl;
    else
        cout<<"Given no. is not Armstrong"<<endl;
    
    return 0;
}