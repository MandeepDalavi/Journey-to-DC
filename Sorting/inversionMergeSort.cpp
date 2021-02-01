//Count the inversions in given array.
//Two elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j.
#include<bits/stdc++.h>
using namespace std;

long long mergeArr(int arr[], int l, int mid, int r){
    long long inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int L[n1];
    int R[n2];
    for(int i=0; i<n1; i++){
        L[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = arr[mid+i+1];
    }
    int i=0, j=0, k=l;
    while (i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            k++; i++;
        }
        else{
            arr[k] = R[j];
            inv += n1-i;
            k++; j++;
        }
    }
    while (i<n1){
        arr[k] = L[i];
        k++; i++;
    }
    while (j<n2){
        arr[k] = R[j];
        k++; j++;
    }
    
    return inv; 
}

long long mergeSort(int arr[], int l, int r){
    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, r);
        inv += mergeArr(arr, l, mid, r);
    }
    return inv;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Inversion Count: " << mergeSort(arr, 0, n) << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout<<endl;
    return 0;
}