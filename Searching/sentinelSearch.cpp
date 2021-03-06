#include<iostream>
using namespace std;

void sentinel(int arr[], int n, int key){
    int last = arr[n-1];
    arr[n-1] = key;
    int i=0;
    while (arr[i] != key)
        i++;
    arr[n-1] = last;
    if( (i<n-1) || (arr[n-1] == key) )
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;
}

int main(){
    int arr[] = { 8, 5, 2, 9, 4, 7, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    sentinel(arr, n, key);
    return 0;
}