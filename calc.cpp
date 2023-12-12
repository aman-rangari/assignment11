#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {

    if(b==0)
    {
        printf("can't divide by zero");
        return 0 ;
    }
    

    return a / b;
}

int modulo(int a, int b) {

      if(b==0)
    {
        printf("can't divide by zero");
        return 0 ;
    }

    return a % b;
}

int main() {
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+,-, *, /, %): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case '%':
            cout << "Result: " << modulo(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
