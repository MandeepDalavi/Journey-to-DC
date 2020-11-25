#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // Self Logic
    string str = "jkskashcalanc";
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << str << endl;
    
    string str1 = "SAKJNFKHDNXK";
    for(int i=0; i<str1.size(); i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;
    }
    cout << str1 << endl;

    // Also use inbuilt method
    transform(str.begin(), str.end(), str.begin(), ::toupper); // convert to uppercase
    cout << str << endl;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower); // convert to lowercase
    cout << str1 << endl;
    return  0;
}