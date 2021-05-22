#include <bits/stdc++.h>
using namespace std;

int row, col, n;

void rectangle(int row, int col){                         // Pattern
    for(int i=1; i<=row; i++){                            //  * * * * *
        for(int j=1; j<=col; j++){                        //  * * * * *
            cout << "* ";                                 //  * * * * *
        }cout<<endl;                                      //  * * * * *
    }                                                     //  * * * * *
}

void hollowRectangle(int row, int col){                   // Pattern
    for(int i=1; i<=row; i++){                            //  * * * * *
        for(int j=1; j<=col; j++){                        //  *       *
            if(i==1 || i==row || j==1 || j==col)          //  *       *
                cout << "* ";                             //  *       *
            else                                          //  * * * * *
                cout << "  ";
        }cout<<endl;
    }
}

void invertedHalfPyramid(int n){                          // Pattern
    for(int i=n; i>0; i--){                               // * * * * *
        for(int j=i; j>0; j--){                           // * * * *
            cout << "* ";                                 // * * *
        }cout<<endl;                                      // * *
    }                                                     // *
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
    for(int i=1; i<=n; i++){                              // Pattern
        for(int j=1; j<=n; j++){                          //         *
            if(j<=n-i)                                    //       * *
                cout << "  ";                             //     * * *
            else                                          //   * * * *
                cout << "* ";                             // * * * * *
        }cout<<endl;
    }
}

void halfPyramidNumbers(int n){                           // Pattern
    for(int i=1; i<=n; i++){                              // 1
        for(int j=1; j<=i; j++){                          // 2 2
            cout << i << " ";                             // 3 3 3
        }cout<<endl;                                      // 4 4 4 4
    }                                                     // 5 5 5 5 5
}

void floydsTriangle(int n){                               // Pattern
    int counter=1;                                        // 1
    for(int i=1; i<=n; i++){                              // 2 3
        for(int j=1; j<=i; j++){                          // 4 5 6
            cout << counter << " ";                       // 7 8 9 10
            counter++;                                    // 11 12 13 14 15
        }cout<<endl;
    }
}

void butterfly(int n){                                    // Pattern
    for(int i=1; i<=n; i++){                              // *                 *
        for(int j=1; j<=i; j++){                          // * *             * *
            cout << "* ";                                 // * * *         * * *
        }                                                 // * * * *     * * * *
        int space = 2*n - 2*i;                            // * * * * * * * * * *
        for(int j=1; j<=space; j++){                      // * * * * * * * * * *
            cout << "  ";                                 // * * * *     * * * *
        }                                                 // * * *         * * *
        for(int j=1; j<=i; j++){                          // * *             * *
            cout << "* ";                                 // *                 *
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

void invertedPattern(int n){                              // Pattern
    for(int i=1; i<=n; i++){                              // 1 2 3 4 5
        for(int j=1; j<=n-i+1; j++){                      // 1 2 3 4
            cout << j << " ";                             // 1 2 3
        }cout<<endl;                                      // 1 2
    }                                                     // 1
}

void _01Pattern(int n){
    for(int i=1; i<=n; i++){                              // Pattern
        for(int j=1; j<=i; j++){                          // 1
            if((i+j)%2 == 0)                              // 0 1
                cout << 1 << " ";                         // 1 0 1
            else                                          // 0 1 0 1
                cout << 0 << " ";                         // 1 0 1 0 1
        }cout << endl;
    }
}

void rhombusPattern(int n){                               // Pattern
    for(int i=1; i<=n; i++){                              //     * * * * *
        for(int j=1; j<=n-i; j++)                         //    * * * * *
            cout << " ";                                  //   * * * * *
        for(int k=1; k<=n; k++)                           //  * * * * *
            cout << "* ";                                 // * * * * *
        cout<<endl;
    }
}

void NumPyramid(int n){                                   // Pattern
    for(int i=1; i<=n; i++){                              //     1
        for(int j=1; j<=n-i; j++)                         //    1 2
            cout << " ";                                  //   1 2 3
        for(int k=1; k<=i; k++)                           //  1 2 3 4
            cout << k << " ";                             // 1 2 3 4 5
        cout<<endl;
    }
}

void pallindromePyramid(int n){
    for(int i=1; i<=n; i++){                              // Pattern
        for(int j=1; j<=n-i; j++)                         //         1
            cout << "  ";                                 //       2 1 2
        for(int k=i; k>0; k--)                            //     3 2 1 2 3
            cout << k << " ";                             //   4 3 2 1 2 3 4
        for(int l=2; l<=i; l++)                           // 5 4 3 2 1 2 3 4 5
            cout << l << " ";                           
        cout<<endl;
    }

    /*
    for(int i=1; i<=n; i++){
        int j, k;
        for(j=1; j<=n-i; j++)
            cout << "  ";
        k=i;
        for(;j<=n;j++)
            cout << k-- << " ";
        k=2;
        for(;j<=n+i-1;j++)
            cout << k++ << " ";
        cout<<endl;>>
    }
    */
}

void star(int n){
    for(int i=1; i<=n; i++){                              // Pattern
        for(int j=1; j<=n-i; j++)                         //       *
            cout << "  ";                                 //     * * *
        for(int k=1; k<=2*i-1; k++)                       //   * * * * *
            cout << "* ";                                 // * * * * * * *
        cout<<endl;                                       // * * * * * * *
    }                                                     //   * * * * *
    for(int i=n; i>0; i--){                               //     * * *
        for(int j=1; j<=n-i; j++)                         //       *
            cout << "  ";
        for(int k=1; k<=2*i-1; k++)
            cout << "* ";
        cout<<endl;
    }
}

int main(){
    int choice;
    char ans;
    do
    {
        cout << "\t\tPattern MENU" <<endl;
        cout << "1. Rectangle" << endl << "2. Hollow Rectangle" << endl << "3. Inverted Half Pyramid" << endl << "4. Half Pyramid" << endl << "5. Half Pyramid with Number" << endl << "6. Floyd's Triangle" << endl << "7. Butterfly" << endl << "8. Inverted Pattern" << endl << "9. 0-1 Pattern" << endl << "10. Rhombus" << endl << "11. Number Pyramid" << endl << "12. Pallindromic Pyramid" << endl << "13. Star" << endl << "14. Exit" << endl;
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
                cout << "\nEnter 'n': ";
                cin >> n;
                invertedPattern(n);
                break;
            case 9:
                cout << "\nEnter 'n': ";
                cin >> n;
                _01Pattern(n);
                break;
            case 10:
                cout << "\nEnter 'n': ";
                cin >> n;
                rhombusPattern(n);
                break;
            case 11:
                cout << "\nEnter 'n': ";
                cin >> n;
                NumPyramid(n);
                break;
            case 12:
                cout << "\nEnter 'n': ";
                cin >> n;
                pallindromePyramid(n);
                break;
            case 13:
                cout << "\nEnter 'n': ";
                cin >> n;
                star(n);
                break;
            case 14:
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