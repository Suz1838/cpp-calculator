#include <iostream>
using namespace std;

// 26/3/25
// making simple calculator to get grip in c++

float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float div(float a, float b);
int rem(int a, int b);

int main(){
    float num1, num2;
    cout << "Enter your first number: ";
    cin >> num1;
    string sign;
    cout << "Enter the operation sign you want to use (+,-,/,*,%): ";
    cin >> sign;
    cout << "Enter the second number: ";
    cin >> num2, "Enter the second number: "; // tried to take prompt

    if (sign == "+"){
        cout << add(num1, num2);
    }

    else if (sign == "-"){
        cout << sub(num1, num2);
    }

    else if (sign == "/"){
        if (num2 == 0)
        {
            cout<<"Error number cannot be diveded by 0";
        }
        else{
        cout << div(num1, num2);
        }
    }

    else if (sign == "*"){
        cout << multi(num1, num2);
    }

    else if (sign == "%"){
        cout << rem(int(num1), int(num2));
    }

    else{
        cout << "Invalid sign pls select from above signs" << endl;
    }
}

float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float multi(float a, float b){
    return a * b;
}

float div(float a, float b){
    return a / b;
}

int rem(int a, int b){
    return a % b;
}
