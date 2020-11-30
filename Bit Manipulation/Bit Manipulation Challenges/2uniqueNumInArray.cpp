// Program to find 2 unique numbers in an array where all numbers except two, are present twice

/*      EXPLANATION
Suppose we have this array {2, 4, 6, 7, 4, 5, 6, 2}
so first we will find xorsum of all this, and those which appear twice will have there xor as 0
so we will be left with only xor of 5 & 7
        7       0 1 1 1
        5     ^ 0 1 0 1
       xor    = 0 0 1 0
then we find position of rightmost 1 present in xor which is 1 position
and do xor of all those elements who has 1 present at that position
and finally we will get our first unique element
and to find other unique element we will do xor of first unique element with already found xor (i.e. 0 0 1 0)

                                                                0 0 1 0     2
                                                              ^ 0 1 1 0     6
                                                                0 1 0 0
     ^           ^     ^                 ^     ^              ^ 0 1 1 1     7
    010   100   110   111   100   101   110   010               0 0 1 1     
   { 2  ,  4  ,  6  ,  7  ,  4  ,  5  ,  6  ,  2 }            ^ 0 1 1 0     6
                                                                0 1 0 1
                                                              ^ 0 0 1 0     2
                                                              = 0 1 1 1     7
                                                                
*/
#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

void unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int getbit = 0;
    int pos = 0;
    while(getbit!=1){
        getbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i],pos-1)){
            newxor = newxor^arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor^newxor) <<endl;
}

int main(){
    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr, 8);
    return 0;
}