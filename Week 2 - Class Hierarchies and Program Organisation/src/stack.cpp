//
// Created by Solomon Ayuba on 20/09/2024 - Module 3.
//

#include<iostream>
#define MAX_SIZE 100
class Stack {
private:
    int top;
    int arr[MAX_SIZE];
    public:
    Stack() {
        top =-1; // initialize top of stack to -1
    }
    // Function to push element onto the stack
    void push(int val) {
        if(top==MAX_SIZE-1) {
            std::cout<<"Stack Overflow\n";
            return;
        }
        arr[++top] = val;
        std::cout<<val << "Pushed into stack\n";
    }
    // Function to pop element from the stack
    int pop() {
        if(top==-1) {
            std::cout<<"Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    //Function to check if the stack is empty
    bool isEmpty() {
        return top==-1;
    }
};

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    std::cout<< "Popped element:"<<myStack.pop()<<std::endl;
    std::cout<< "Popped element:"<<myStack.pop()<<std::endl;
    std::cout<< "Is the stack empty> "<<(myStack.isEmpty()?"Yes":"No")<<std::endl;
    return 0;
}
