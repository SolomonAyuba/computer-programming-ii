// File: MyClass.Java

package mypackage;

public class MyClass{
    // public method accessible to other classes within the same package
    public void myMethod(){
        System.out.println("mypackage method");
    }
}

// File: AnotherClass.java
package mypackage;

public class AnotherClass{
    public void anotherMethod(){
        MyClass obj = new MyClass();
        obj.myMethod(); // Accessing public method from MyClass within the same package
    }
}