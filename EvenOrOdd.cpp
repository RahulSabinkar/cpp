#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    if (num <= 0)
    {
        cout << "Error. Enter only a natural number.\n";
        exit(1);
    }
    else if (num % 2 == 0)
        cout << "It is an even number.\n";
    else
        cout << "It is an odd number.\n";
}
