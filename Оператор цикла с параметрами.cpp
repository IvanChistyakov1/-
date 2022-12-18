#include <iostream>
using namespace std;

int main(){
    int k;
    float a1 = 1, a2 = 2, ai;
    cout << "K: ";
    cin >> k;
    for(int i = 2; i < k; i++){
        ai = (a1 + 2*a2) / 3;
        a1 = a2;
        a2 = ai;
    }
    cout << "Ak = " << ai;
}