#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    cout << str << endl; // prints string

    string str1 = "Hello Catalina";
    cout << str1 << endl; // prints whole string with space

    string str2;
    cin >> str2; // take string till space only
    cout << str2 << endl; // prints 1st word only

    // So, to input complete sentence into string we use getline
    string str3;
    getline(cin, str3); // take whole sentence as input
    cout << str3 << endl; // prints whole sentence

    // CONCATENATING STRINGS
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    /*
            OR USE
        s1 = s1 + s2;
            OR Directly
        cout << s1 + s2 << endl;
    */
    cout << s1 << endl;

    string str4 = "Hello";
    cout << str4[1] << endl; // gives character at index 1 in string

    string str5 = "Hello Big Sur";
    str5.clear(); // erases everything present inside string
    str5.empty(); // true if string is empty
    cout << str5 << endl;

    string s3 = "abc";
    string s4 = "xyz";
    cout << s4.compare(s3) << endl; // compares string lexicographically

    string str6 = "nincompoop";
    str6.erase(3, 3); // removes 3 characters from string with starting index 3
    cout << str6 << endl;

    cout << str6.find("com") << endl; // gives starting index where "com" is present in string 

    str6.insert(2, "lol"); // inserts "lol" at index 2
    cout << str6 << endl;

    cout << str6.size() << endl; // gives no. of characters present in string including spaces
    cout << str6.length() << endl; // gives no. of characters present in string including spaces

    cout << str6.substr(6, 4) << endl; // gives substring of 4 characters from index 6

    string s5 = "786";
    cout << stoi(s5) << endl; // converts string to integer

    int x = 786;
    cout << to_string(x) + "2" << endl; // converts int to strings and concats with 2

    // SORT STRING, we must #include<algorithm>
    string s6 = "cskajhowncslnncal";
    sort(s6.begin(), s6.end()); // sorts string in ascending order    cout << s6 << endl;

    return 0;
}