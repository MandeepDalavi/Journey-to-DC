// Encapsulation: Hiding "sensitive" data from user.
// Access Modifiers: keywords in object oriented languages that set the accessibility of classes, methods, and other members.
/*    + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +
      |  Access Modifiers  |  Own Class  |  Derived Class  |  Outside the Class |
      + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +
      |       Public       |     YES     |      YES        |        YES         |
      |       Private      |     YES     |      NO         |        NO          |
      |       Protected    |     YES     |      YES        |        NO          |
      + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +
*/
#include<iostream>
using namespace std;

class encap{
    public:     // Access Modifier
        int a;
        void funcA(){
            cout << "Function A" << endl;
        }
    private:    // Access Modifier
        int b;
        void funcB(){
            cout << "Function B" << endl;
        }
    protected:  // Access Modifier
        int c;
        void funcC(){
            cout << "Function C" << endl;
        }
};

int main(){
    encap obj;
    obj.funcA();    // Accessible
    obj.funcB();    // Gives Error
    obj.funcC();    // Gives Error
    return 0;
}