#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float tf;
    cout << "Enter Tf: ";
    cin >> tf;
    cout << "Tc = " << (tf - 32) * 5/9;
    return 0;
}