#include<iostream>
using namespace std;

class A {
    public:
        void Afunc(){
            cout << "Function A";
        }
};

class B {
    public:
        void Bfunc(){
            cout << "Function B";
        }
};

class C : public A, public B {
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}