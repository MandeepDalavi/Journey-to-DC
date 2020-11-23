#include<iostream>
using namespace std;

void increment(int c){
    c++;
}

void swap(int *d, int *e){
    int temp = *d;
    *d = *e;
    *e = temp;
}

int main(){

    // POINTER ARITHMETICS
    int a = 10;
    int *aptr = &a; // memory location of a assigned to *aptr
    cout << aptr << endl; // prints memory location of variable a
    cout << &aptr << endl; // prints memory location of pointer
    cout << *aptr << endl; // prints value present at the memory location, i.e 10
    aptr++; // jumps to next memory location (according to data type)
    cout << aptr << endl; // new memory location
    cout << *aptr << endl; // value present at new memory location
    
    // POINTERS AND ARRAYS
    int arr[] = {10, 20, 30};
    cout << *arr << endl; // prints value of arr pointer, i.e 10 as its points to arr[0] by default

    int *ptr = arr; // stores the address of arr as it default points to arr[0]
    for(int i=0; i<3; i++){
        cout << *ptr << " "; // prints arr values using pointer
        ptr++; // jumps to next location

        // This could also be done without using pointer
        // cout << *arr << " ";
        // arr++; // illegal (error)
        cout << *(arr + i) << " "; // (arr + i) is a indexing pointer not a location pointer
    }cout << endl;
    

    // POINTER TO POINTER
    int b = 10;
    int *p;
    p = &b;
    cout << *p << endl; // prints value of b, i.e 10
    int **q = &p; // pointer to pointer initialization
    cout << p << endl; //prints address of b
    cout << *q << endl; // Dereference once, prints value inside p, i.e address of b
    cout << **q << endl; // Dereference twice, prints value of b, i.e. 10


    // POINTERS TO FUNCTION
    int c = 2;
    increment(c); // value of passed to function
    cout << c << endl;  // prints 2, as variable in function and variable here are different


    int d = 2;
    int e = 4;
    swap(d, e); // values of d & e passed to function
    cout << d << " " << e << endl; // stills prints 2 4 

    // So, the above problem's can be solved using pointer
    int *dptr = &d;
    int *eptr = &e;
    swap(dptr, eptr); // passed pointers to function
    cout << d << " " << e << endl; // now prints 4 2

    // But, this could be done without making new pointer variable
    // swap(&d, &e);

    return 0;
}