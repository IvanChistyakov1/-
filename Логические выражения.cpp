#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    cout << (a == b && a != c) || (b == c && a != b) || (c == a && a != b);
}