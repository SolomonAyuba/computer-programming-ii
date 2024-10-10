//
// Created by Solomon Ayuba on 10/10/2024.
//
//Recursive function for Factorial Problems

using namespace std;

int factorial (int num) {
    // Base case
    if (num <=1)
        return 1;
    else {
        return num*factorial(num-1);
    }
}

int main() {
    int number, result;
    cout << "Enter a Non-negative number to calculate its factorial: "; endl;
    cin >> number;
    result = factorial(number);
    cout<<"Factorial of the " << number << " is: "<< result << endl;
}