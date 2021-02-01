#include<bits/stdc++.h>
using namespace std;

bool Compare(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}

int main(){
    
    int arr[] = {10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), Compare);
    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i;
    }

    for(int i=0; i<v.size(); i++){
        cout << arr[i] << " ";
    }cout<<endl;

    return 0;
}
//Initial Array
    arr    10  16  7   14  5   3   12  9
    idx    0   1   2   3   4   5   6   7
//Want reduced array
    arr    4   7   2   6   1   0   5   3
    idx    0   1   2   3   4   5   6   7
//Pair of array element with its position
    first  3   5   7   9   10  12  14  16
    second 5   4   2   7   0   6   3   1