// Generate all substrings of a string
#include<iostream>
using namespace std;

void subseq(string s, string ans){
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string restStr = s.substr(1);
    subseq(restStr,ans);
    subseq(restStr,ans+ch);
}

int main(){
    subseq("ABC", "");
    return 0;
}