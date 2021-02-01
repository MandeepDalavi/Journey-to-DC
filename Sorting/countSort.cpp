#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){
    int large = arr[0];
    for(int i=0; i<n; i++){
        large = max(large, arr[i]);
    }

    int countArr[large+1] = {0};
    for(int i=0; i<n; i++)
        countArr[arr[i]]++;
    
    for(int i=1; i<=large; i++){
        countArr[i] += countArr[i-1];
    }

    int ansArr[n];
    for(int i=n-1; i>=0; i--){
        ansArr[--countArr[arr[i]]] = arr[i];  
    }

    for(int i=0; i<n; i++){
        arr[i] = ansArr[i];
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    countSort(arr, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;

    return 0;
}