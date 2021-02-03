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