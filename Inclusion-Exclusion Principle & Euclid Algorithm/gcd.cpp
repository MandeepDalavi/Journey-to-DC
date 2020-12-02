// Euclid Algorithm to find GCD(Greatest Common Divisor) i.e. HCF
#include<iostream>
using namespace std;

int gcd(int a, int b){
    while (b!=0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

//              EXPLANATION
/*
            Prime Factor's
        24 = 2 x 2 x 2 x 3       Common Prime Factor's are 2 & 3
        42 = 2 x 3 x 7           So, GCD = 2 x 3 = 6

Euclid Algorithm
    42 - 24 = 18    GCD of 18 & 24 will be same as GCD of 24 & 42
    24 - 18 = 6     i.e. if we subtract 2 nos. then there GCD never changes
    18 - 6  = 12
    12 - 6  = 6
    6 - 6   = 0

        OR
    
    42 % 24 = 18
    24 % 18 = 6         This is better than above
    18 % 6  = 0

*/