#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int curr = 2;
    int ans = 2;
    int j = 2;
    int pd = a[1] - a[0];

    while(j<n){
        if(pd == a[j] - a[j-1]){
            curr++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
    }
    cout << ans << endl;

    return 0;
}