#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, flag = 0;
    cout<<"Enter No. to check Prime or not: ";
    cin>>n;
    for(int i=2; i<sqrt(n);i++){
        if(n%i==0){
            flag = 1;
            cout<<"Given no. is Not Prime"<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"Given no.is Prime"<<endl;
    return 0;
}