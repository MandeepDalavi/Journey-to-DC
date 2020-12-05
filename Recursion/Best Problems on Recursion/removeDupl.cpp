#include<iostream>
using namespace std;

string removeDup(string s){
    if(s.length()==0)
        return "";
    char ch = s[0];
    string restAns = removeDup(s.substr(1));
    if(ch==restAns[0])
        return restAns;
    
    return (ch+restAns);
}

int main(){
    cout << removeDup("aaaabbbeeecdddd") << endl;
    return 0;
}