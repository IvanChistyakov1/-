#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    float x, a, c, h, s;
    cout << "Номер элемента:";
    cin >> n;
    cout << "Длинна:";
    cin >> x;
 
    switch (n) {
    case 1:
        a = x;
        c = a * sqrt(2);
        h = c / 2;
        s = c * h / 2;
        cout << c << h << s;
        break;
    case 2:
        c = x;
        a = c / sqrt(2);
        h = c / 2;
        s = c * h / 2;
        cout << a << h << s;
        break;
    case 3:
        h = x;
        c = 2 * h;
        a = c / sqrt(2);
        s = c * h / 2;
        cout << a << c<< s;
        break;
    case 4:
        s = x;
        h = sqrt(s);
        c = 2 * h;
        a = c / sqrt(2);
        cout << a << c << h;
        break;
    }
    return 0;
}