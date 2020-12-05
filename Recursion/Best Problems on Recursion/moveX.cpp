// Move all x to the end of the string
#include<iostream>
using namespace std;

string moveAllX(string s){
    if(s.length()==0)
        return "";
    char ch = s[0];
    string restAns = moveAllX(s.substr(1));
    if(ch=='x')
        return restAns+ch;
    return (ch+restAns);
}

int main(){
    cout << moveAllX("axxbdxcefxhix");
    return 0;
}