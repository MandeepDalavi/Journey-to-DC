//Print the nth Fibonacci number
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

/*          EXPLANATION

        0, 1, 1, 2, 3, 5, 8, 13, ...

        Fib(n) = Fib(n-1) + Fib(n-2)

        Fib(0) = 0      Fib(1) = 1

example:
                                        f(4)
                                    *       *
                                *                *
                            *                        *
                        f(3)                             f(2)
                      *      *                         *      *
                    *          *                     *          *
                f(2)            f(1)             f(1)             f(0)
               *    *
              *      *
          f(1)        f(0) 

*/