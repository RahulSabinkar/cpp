#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "First number is now: " << num1 << "\n";
    cout << "Second number is now: " << num2 << "\n";
}
