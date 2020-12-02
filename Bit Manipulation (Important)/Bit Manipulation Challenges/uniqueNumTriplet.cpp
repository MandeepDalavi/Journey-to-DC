// Program to find a unique number in an array where all numbers except one, are present thrice

/*      EXPLANATION + LOGIC
- We will maintain an array of 64 size which will store the number of times ith bit has occurred in the array.
- Take the modulo of each element of this array with 3.
- Resultant array will represent the binary representation of the unique number.
- Convert that binary number to decimal number and output it.

        { 1  ,  3  ,  2  ,  3  ,  4  ,  2  ,  1  ,  1  ,  3  ,  2 }
         001   110   010   110   100   010   001   001   110   010

       0     1     2     4     8    16
    +-----+-----+-----+-----+-----+-----+-----+-----+-----+------------------+
    |  3  |  6  |  4  |  0  |  0  |  0  |  0  |  0  |  0  |   ... 64 bits    |
    +-----+-----+-----+-----+-----+-----+-----+-----+-----+------------------+
Mod =  0     0     1

    setBit at position 2 on 0 0 0 0. Becomes 0 1 0 0 (i.e. 4 is unique)
*/
#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return (n | (1 << pos));
}

int getBit(int n, int pos){
    return ((n & (1 << pos))!=0);
}

int unique(int arr[], int n){
    int result = 0;
    for(int i=0; i<64; i++){    // Traverse over all bits
        int sum = 0;
        for(int j=0; j<n; j++){ // Traverse over all array elements
            if(getBit(arr[j], i)){  // if arr[j] element has ith bit set (i.e. 1) or not
                sum++;              // if yes, then increment sum 
            }
        }
        if(sum % 3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout << unique(arr, 10) << endl;
    return 0;
}
