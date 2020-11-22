#include<iostream>
#include<climits>
using namespace std;

//              BRUTE FORCE APPROACH
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i=0; i<n; i++){                      Time Complexity: O(n^3)
//         for(int j=i; j<n; j++){
//             int sum = 0;
//             for(int k=i; k<=j; k++){
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum,sum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

//-------------------------------------------------------

//              CUMULATIVE SUM APPROACH
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int currSUm[n+1];
//     currSUm[0] = 0;
//     for(int i=1; i<=n; i++){
//         currSUm[i] = currSUm[i-1] + arr[i-1];    Time Complexity: O(n^2)
//     }

//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum = 0;
//         for(int j=0; j<i; j++){
//             sum = currSUm[i] - currSUm[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

//-------------------------------------------------------

//              KEDANE's ALGORITHM
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;                           //Time Complexity: O(n)
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;
    return 0;
}