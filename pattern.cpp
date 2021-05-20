#include <bits/stdc++.h>
using namespace std;

int row, col, n;

void rectangle(int row, int col){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout << "* ";
        }cout<<endl;
    }
}

void hollowRectangle(int row, int col){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col)
                cout << "* ";
            else
                cout << "  ";
        }cout<<endl;
    }
}

void invertedHalfPyramid(int n){
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            cout << "* ";
        }cout<<endl;
    }
}

void halfPyramid(int n){
    // for(int i=1; i<=n; i++){
    //     for(int j=n-i; j>0; j--){
    //         cout << "  ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout << "* ";
    //     }cout<<endl;
    // }

    // A Bit better approach
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i)
                cout << "  ";
            else
                cout << "* ";
        }cout<<endl;
    }
}

void halfPyramidNumbers(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }cout<<endl;
    }
}

void floydsTriangle(int n){
    int counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << counter << " ";
            counter++;
        }cout<<endl;
    }
}

void butterfly(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int choice;
    char ans;
    do
    {
        cout << "\t\tPattern MENU" <<endl;
        cout << "1. Rectangle" << endl << "2. Hollow Rectangle" << endl << "3. Inverted Half Pyramid" << endl << "4. Half Pyramid" << endl << "5. Half Pyramid with Number" << endl << "6. Floyd's Triangle" << endl << "7. Butterfly" << endl << "8. Exit" << endl;
        cout << "Please enter you choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "\nEnter No. of Rows and columns: ";
                cin >> row >> col;
                rectangle(row, col);
                break;
            case 2:
                cout << "\nEnter No. of Rows and columns: ";
                cin >> row >> col;
                hollowRectangle(row, col);
                break;
            case 3:
                cout << "\nEnter 'n': ";
                cin >> n;
                invertedHalfPyramid(n);
                break;
            case 4:
                cout << "\nEnter 'n': ";
                cin >> n;
                halfPyramid(n);
                break;
            case 5:
                cout << "\nEnter 'n': ";
                cin >> n;
                halfPyramidNumbers(n);
                break;
            case 6:
                cout << "\nEnter 'n': ";
                cin >> n;
                floydsTriangle(n);
                break;
            case 7:
                cout << "\nEnter 'n': ";
                cin >> n;
                butterfly(n);
                break;
            case 8:
                exit(0);
                break;
            default:
                break;
        }
        cout << "\nDo you want to continue? (y/n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}