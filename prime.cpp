#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, flag = 1;
    cout<<"Enter No. to check Prime or not: ";
    cin>>n;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag==0 || n==1)
        cout<<"Given no. is not Prime"<<endl;
    else
        cout<<"Given no. is prime"<<endl;
    return 0;
}