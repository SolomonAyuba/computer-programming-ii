// Week 2 Module
//Namespaces

/* All identifiers within a namespaces scope can be accessed by each other without needing additional qualification.
 * Classes within the same namespace must still adhere to the access control rules specified by access modifiers like
 * public, protected, and private.
 */

// Implementing Namespaces in C++
/* C++ offers three ways to work with namespaces, which are like folders for organising code. These methods help you
 * avoid naming conflicts and keep your code clean.
 * Dot-dot notation(::) lets you use the scope resolution operator. (::) followed by the namespace name to access
 * specific elements (variables, functions, or classes) within that namespace.
 */


    // File: MyClass.h
    namespace mynamespace {
        class MyClass{
            public:
                // Public method
                 void myMethod();
        };
    }


// ------------------------

#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello World!\n";
    cout << "This is a Computer Programming Class";
}

// ------------------------


// File: MyClass.h

namespace mynamespace {
    class MyClass {
    public:
    // public method
        void myMethod();
    };
}

// File: AnotherClass.h
namespace mypackage {
    class AnotherClass {
    public:
        void anotherMethod();
    };
}

// File: AnotherClass.cpp
#include "MyClass.h"
#include "AnotherClass.h"

void mynamespace::AnotherClass:anotherMethod() {
    MyClass obj;
    obj.myMethod(); // Compilation error: My Class::myMethod() is not accessible
}



