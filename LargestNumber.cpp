#include<bits/stdc++.h>
using namespace std;
int main() {
    cout << "Enter numbers or 0 to quit: \n";
    ios::sync_with_stdio(0);
    cin.tie(0);
    int number, largest=0;
    while (true) {
        cin >> number;
        if (largest<number)
            largest = number;
        else if (number==0)
            break;
    }
    cout << "Largest number is: " << largest << "\n";
}
