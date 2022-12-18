#include <iostream>
using namespace std;

int main() {
	int a, b, count = 0;
    cout << "A, B: ";
    cin >> a >> b;

    while(a >= b){
        count += 1;
        a -= b;
    }
    cout << count << endl;
}