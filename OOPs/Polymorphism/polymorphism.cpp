/*
# Polymorphism: means having many forms.
# Types of Polymorphism:
    1. Compile Time Polymorphism
        a) Function Overloading
            When there are multiple functions with same name but different parameters then these functions are said to be overloaded.
            Functions can be overloaded by change in number of arguments or/and change in type of arguments.
        b) Operator Overloading
            the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
    2. Run Time Polymorphism
        a) Virtual Functions/Function Overriding
            occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
*/
Function Overloading{
#include<iostream>
using namespace std;

class A {
    public:
        void Afunc(){
            cout << "Function without argument" << endl;
        }
        void Afunc(int x){
            cout << "Function with int argument" << endl;
        }
        void Afunc(double y){
            cout << "Function with double argument" << endl;
        }
}

int main(){
    A obj;
    obj.Afunc();
    obj.Afunc(7);
    obj.Afunc(3.14);
    return 0;
}
}

Operator Overloading{
#include<iostream>
using namespace std;

class complex {
    private:
        int real, imag;
    public:
        complex(int r=0, int i=0){
            real = r;
            imag = i;
        }
        complex operator + (complex const &obj){
            complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print(){
            cout << real << " + i" << imag << endl;
        }
};


int main(){
    complex c1(10, 5), c2(12, 7);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}
}

Function Overriding{
#include<iostream>
using namespace std;

class base {
    public:
        virtual void print(){
            cout << "print base class" << endl;
        }
        void display(){
            cout << "display base class" << endl;
        }
};

class derived : public base {
    public:
        void print(){
            cout << "print derived class" << endl;
        }
        void display(){
            cout << "display derived class" << endl;
        }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}
}
