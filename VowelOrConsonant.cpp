#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'|ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout << "It is a Vowel.\n";
    else
        cout << "It is a consonant.\n";
}
