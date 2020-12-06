// Given a "2 x n" board and tiles of size " 2 x 1", count th number of ways to tile the given board using these tiles
#include<iostream>
using namespace std;

int tilingWay(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return tilingWay(n-1) + tilingWay(n-2);
}

int main(){
    cout << tilingWay(4);
    return 0;
}