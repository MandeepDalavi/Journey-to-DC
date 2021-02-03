#include<iostream>
using namespace std;

class A {
    public:
        void Afunc(){
            cout << "Function A";
        }
};

class B : public A {
    public:
        void Bfunc(){
            cout << "Function B";
        }
};

class C {
    public:
        void Cfunc(){
            cout << "Function C";
        }
};

class D : public B, public C {
};

int main(){
    D d;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
    return 0;
}