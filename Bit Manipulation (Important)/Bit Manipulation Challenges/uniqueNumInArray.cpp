// Program to find a unique number in an array where all numbers except one, are present twice
#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int xornum = 0;
    for(int i=0; i<n; i++){
        xornum = xornum^arr[i];
    }
    return xornum;
}

int main(){
    int arr[] = {1,2,3,4,1,2,3,4};
    cout << unique(arr, 7) << endl;
    return 0;
}