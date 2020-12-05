// Generate substrings with ASCII number
#include<iostream>
using namespace std;

void subseq(string s, string ans){
    if(s.length()==0){
        cout << ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string restStr = s.substr(1);
    subseq(restStr, ans);
    subseq(restStr, ans+ch);
    subseq(restStr, ans+to_string(code));
}

int main(){
    subseq("AB", "");
    return 0;
}