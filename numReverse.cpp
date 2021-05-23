#include<bits/stdc++.h>
using namespace std;

class rev{
    private:
        int lastDig, rev=0;
    public:
        int revNum(int n){                  // Reverse only +ve Integer
            while(n>0){
                lastDig = n%10;
                rev = rev*10 + lastDig;
                n /= 10;
            }
            return rev;
        }
        int revInteger(int n){              // Reverses complete set of Integers in range(-2^31 to 2^31 - 1)
            rev = 0;
            constexpr int top_limit = INT_MAX/10;
            constexpr int bottom_limit = INT_MIN/10;
            while (n) {
                if (rev > top_limit || rev < bottom_limit)
                    return 0;
                lastDig = n%10;
                rev = rev*10 + lastDig;
                n /= 10;
            }
            return rev;
        }
};

int main(){
    rev obj;
    int n, choice;
    char ans;
    do{
        cout << "\tMENU" << endl;
        cout << "1. Reverse +ve Num" << endl << "2. Reverse Complete set of Integer" << endl << "3. Exit" << endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:
                cout << "\nEnter any +ve number: ";
                cin >> n;
                cout << "\nReversed Num: " << obj.revNum(n);
                break;
            case 2:
                cout << "\nEnter any Integer: ";
                cin >> n;
                cout << "\nReversed Num: " << obj.revInteger(n);
                break;
            case 3:
                exit(0);
            default:
                break;
        }
        cout << "\nDo you want to continue? (y/n) : ";
        cin >> ans;
    }while(ans == 'y' || ans == 'Y');
    return 0;
}