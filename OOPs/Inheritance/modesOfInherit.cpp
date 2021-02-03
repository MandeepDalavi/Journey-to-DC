#include<iostream>
using namespace std;

class A {
    public:
        void Apub();
    private:
        void Apvt();
    protected:
        void Apro();
};

class B : public A {
};

class C : private A {
};

class D : protected A {
};

int main(){
    B b;
    C c;
    D d;
    b.Apub();
    c.Apub();
    d.Apub();
    return 0;
}