#include<iostream>
using namespace std;

void shellSort(int arr[], int n){
    for(int gap = n/2; gap>0; gap/=2){

        // Similar to Insertion Sort Algorithm
        for(int i=gap; i<n; i++){
            int key = arr[i];
            int j = i;
            while (j >= gap && arr[j-gap] > key)
            {
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    // Taking Input
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    shellSort(arr, n);

    // Printing Output
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}