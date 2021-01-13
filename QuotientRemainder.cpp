#include<bits/stdc++.h>
using namespace std;
int main() {
    int divisor, dividend;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    cout << divisor << " ) " << dividend << " ( " << dividend/divisor << "\n";
    cout << "Remainder: " << dividend%divisor << "\n";
}
