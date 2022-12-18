#include <iostream>
using namespace std;

int main() {
	int n;
    cout << "N: ";
    cin >> n;
    int a[n];
    cout << "a = ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double b[n];
    float sum = a[0];
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        sum += a[i];
        b[i] = sum / (i + 1);
    }
    cout << "b = " << endl;
    for(int i = 0; i < n; i++){
        cout << b[i] << endl;
    }
}