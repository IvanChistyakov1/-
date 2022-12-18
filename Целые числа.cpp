#include <iostream>
using namespace std;

int main(){
    int y;
    cout << "Enter the year: ";
    cin >> y;
    cout << "Century = " << y / 100 + 1 << endl;
}