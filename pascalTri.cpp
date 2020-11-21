#include<iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i=2; i<=num; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
     int n;
     cout<<"Enter any number: ";
     cin>>n;
     for(int i=0; i<n; i++){
         for(int j=0; j<=i; j++){
             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
         }
         cout<<endl;
     }
     return 0;
}