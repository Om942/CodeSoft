#include <iostream>
using namespace std;

int main() {
    float number1, number2;
    string operation;
    float result;

    cout<<"   WELCOME TO THE CALCULATOR  ";
    cout << "\n \nEnter  your first number: ";
    cin >> number1;
  
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
     cout << "Enter your second number: ";
    cin >> number2;

   if(operation == "+"){
       cout << "  RESULT: the addition is " << number1 + number2;
   }
    else if(operation == "-"){
       cout <<"   RESULT: the substraction is " << number1 - number2;
    }
   else if(operation == "*"){
       cout << "   RESULT: the multiplcation is " << number1 * number2;
       
   }
    else if(operation == "/"){
       cout <<"   RESULT: the division is " << number1 / number2;
       
    }
    else{
        cout << "Operation  is  invalid!!";
    }
    return 0;
}