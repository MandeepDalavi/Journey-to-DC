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

class C : public A {
    public:
        void Cfunc(){
            cout << "Function C";
        }
};

class D : public B {
};

class E : public B {
};

class F : public C {
};

class G : public C {
};

int main(){
    D d;
    F f;
    d.Afunc();
    d.Bfunc();
    f.Afunc();
    f.Cfunc();
    return 0;
}