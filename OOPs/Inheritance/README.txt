# Inheritance: The capability of a class to derive properties and characteristics from another class is called Inheritance.

    -> Derived Class (child) - class that inherits from another class.
    -> Base Class (parent) - class that's being inherited from.

# Types of Inheritance:
    1. Single Inheritance
    2. Multiple Inheritance
    3. Multi level Inheritance
    4. Hybrid Inheritance
    5. Hierarchical Inheritance

# Single Inheritance:
                                        class B inherits from class A
                class A
                   ^
                   |
                class B

# Multiple Inheritance:
                                        class C inherits from both class A & B
            class A    class B
                 ^      ^
                  \    /
                 class C

# Multi level Inheritance:
                                        class C inherits from class B and class B inherits from class A
                class A
                   ^
                   |
                class B
                   ^
                   |
                class C
            
# Hybrid Inheritance:
                                        class D inherits from both B & C, class B inherits from A
                 class A
                  ^
                 /
            class B    class C
                 ^      ^
                  \    /
                 class D
                
# Hierarchical Inheritance:
                                        class D & E inherits from B, class F & G inherits from C, and class B & C inherits from A
                    class A
                    ^     ^
                   /       \
            class B         class C
             ^   ^           ^   ^
            /     \         /     \
       class D  class E  class F class G

# Modes of Inheritance:
   1. Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become
                   public in the derived class and protected members of the base class will become protected in derived class.
   2. Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of 
                      the base class will become protected in derived class.
   3. Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of 
                    the base class will become Private in derived class.

   + ---------------- + ---------------------------------------------------------- +
   |     Base class   |                   Modes of Inheritance                     |
   |   member access  ├ ---------------------------------------------------------- ┤
   |     specifier    |      Public      |      Private      |      Protected      |
   + ---------------- + ---------------- + ----------------- + ------------------- +
   |      Public      |      Public      |     Protected     |       Private       |
   + ---------------- + ---------------- + ----------------- + ------------------- +
   |     Protected    |    Protected     |     Protected     |       Private       |
   + ---------------- + ---------------- + ----------------- + ------------------- +
   |      Private     |  Not Accessible  |   Not Accessible  |    Not Accessible   |
   + ---------------- + ---------------- + ----------------- + ------------------- +