// Reverse a string using Recursion
#include<iostream>
using namespace std;

void reverseStr(string s){
    if(s.length()==0)
        return;
    string restString = s.substr(1);
    reverseStr(restString);
    cout << s[0];
}

int main(){
    reverseStr("binod");
    return 0;
}