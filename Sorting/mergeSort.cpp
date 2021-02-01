#include<iostream>
using namespace std;

void mergeArr(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(int j=0; j<n2; j++)
        R[j] = arr[mid+1+j];

    int i=0, j=0, k=l;
    while (i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    int mid = (l+r-1)/2;
    if(l<r){
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        mergeArr(arr, l, mid, r);
    }
    return;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;

    return 0;
}